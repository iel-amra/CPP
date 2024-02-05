#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>
#include "BitcoinExchange.hpp"

#define OK 0
#define NOT_VALID 1
#define NEGATIVE 2
#define TOO_LARGE 3

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::map;
using std::getline;

bool check_date(const string & date)
{
    if (date.size() != 10)
        return false;
    int day = atoi(date.substr(8, 2).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int year = atoi(date.substr(0, 4).c_str());
    if (date.substr(0, 4).find_first_not_of("0123456789") != string::npos
        || date.substr(5, 2).find_first_not_of("0123456789") != string::npos
        || date.substr(0, 4).find_first_not_of("0123456789") != string::npos
        || date[4] != '-' || date[7] != '-'
        || month > 12 || month == 00
        || day > 31 || day == 00
        || (month < 7 && month % 2 == 0 && day > 30)
        || (month > 8 && month % 2 == 1 && day > 30)
        || (month == 2 && day > 29)
        || (month == 2 && (year % 4 != 0 || year % 100 == 0) && year % 400 != 0 && day > 28))
            return false;
    return true;
}

unsigned int check_price(const string &price, bool checksize = false)
{
    if (price.size() == 0 || (price[0] != '-' && (price[0] < '0' || price[0] > '9'))
        ||price.find_first_not_of("0123456789.") != string::npos
        || price.find(".") != price.rfind(".")
        || price.find(".") == price.size())
        return (NOT_VALID);
    else if (price[0] == '-')
        return (NEGATIVE);
    if (checksize == true && strtod(price.c_str(), NULL) > 1000)
        return (TOO_LARGE);
    return OK;
}

bool check_line(const string & buffer)
{
    string date;
    string price;

    if (buffer.find(',') == string::npos)
        return (false);
    date = buffer.substr(0, buffer.find(','));
    price = buffer.substr(buffer.find(',') + 1);
    if (!check_date(date) || check_price(price))
        return (false);
    return true;
}

void parse_line(const string & buffer, const mymap &data)
{
    string date;
    string value;
    int ret;

    if (buffer.find(" | ") == string::npos)
    {
        cout << "Bad input : " << buffer << endl;
        return;
    }
    date = buffer.substr(0, buffer.find(" | "));
    value = buffer.substr(buffer.find(" | ") + 3);
    if (!check_date(date))
    {
        cout << "Wrong date : " << date << endl;
        return;
    }
    ret = check_price(value, true);
    if (ret == NOT_VALID)
        cout << "Not a valid value : " << value << endl;
    else if (ret == NEGATIVE)
        cout << "Not a positive number : " << value << endl;
    else if (ret == TOO_LARGE)
        cout << "Too large a number : " << value << endl;
    else if (ret == OK)
        cout << date << " => " << value << " = " << data.lower_bound(date)->second * atof(value.c_str()) << endl;
    return;
}

mymap get_parsed_data()
{
    string buffer;
    mymap data;
    ifstream file("data.csv");
    if (file.fail())
    {
        std::cerr << "Failed to open file : data.csv" << endl;
        throw std::exception();
    }
    while (!file.eof())
    {
        std::getline (file, buffer);
        if (check_line(buffer))
            data[buffer.substr(0, buffer.find(','))] = atof(buffer.substr(buffer.find(',') + 1).c_str());
    }
    file.close();
    return data;
}      