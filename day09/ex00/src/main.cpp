#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cstdlib>

#include "BitcoinExchange.hpp"

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::map;
using std::getline;

int main(int argc, char **argv)
{    
    string buffer;

    if (argc != 2)
    {
        std::cerr << "Wrong number of aguments, usage : ./btc [file to open]" << endl;
        return (1);
    }
    ifstream file(argv[1]);
    if (file.fail())
    {
        std::cerr << "Failed to open file : " << argv[1] << endl;
        return (1);
    }
    mymap data;
    data = get_parsed_data();
    std::getline (file, buffer);
    if (buffer != "date | value")
        parse_line(buffer, data);
    while (!file.eof())
    {
        std::getline (file, buffer);
        parse_line(buffer, data);
    }
    return (0);
}