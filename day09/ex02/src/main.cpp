#include <iostream>
#include <string>
#include <list>
#include <vector>

#include "PmergeMe.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

int main(const int argc, char **argv)
{
    vector<vector <int> > tab;

    if (argc == 1)
    {
        cerr << "Usage : ./PmergeMe [Numbers to sort as unique arguments]" << endl;
        return (1);
    }
    if (check(argc, argv))
    {
        cerr << "Bad input" << endl;
        return (1);
    }
    tab = parse_for_vect(argc, argv);
    //display(tab);
    ford_johnson(tab);
    //cout << "Display :" << endl;
    //display(tab);
    return (0);
}