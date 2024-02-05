#include <iostream>
#include <string>

#include "RPN.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cerr << "Wrong number of aguments, usage : ./RPN [input sequence]" << endl;
        return (1);
    }

    try
    {
        std::string input;
        input = argv[1];
        if (check(input))
        {
            cerr << "Bad input" << endl;
            return (1);
        }
        cout << calculate(input) << endl;
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
    }
    return (0);
}