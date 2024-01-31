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
using std::list;

int main(const int argc, char **argv)
{
    vector<vector <int> > tab;
    list<list <int> > lst;

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
    for (vector<vector <int> >::iterator it = tab.begin(); it != tab.end(); it++)
        lst.push_back(list<int>(it->begin(), it->end()));
    cout << "Vector :" << endl;
    display<vector<vector <int> >, vector<int> >(tab);
    cout << "List :" << endl;
    display<list<list <int> >, list<int> >(lst);
    ford_johnson(tab);
    ford_johnson(lst);
    cout << "Display :" << endl;
    display<vector<vector <int> >, vector<int> >(tab);
    return (0);
}