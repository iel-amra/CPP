#include <iostream>
#include <string>
#include <deque>
#include <vector>

#include "PmergeMe.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::deque;

int main(const int argc, char **argv)
{
    vector<vector <int> > tab;
    deque<deque <int> > dq;

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
    try
    {
        tab = parse_for_vect(argc, argv);
        for (vector<vector <int> >::iterator it = tab.begin(); it != tab.end(); it++)
            dq.push_back(deque<int>(it->begin(), it->end()));
        cout << "Vector :" << endl;
        display<vector<vector <int> >, vector<int> >(tab);
        cout << "deque :" << endl;
        display<deque<deque <int> >, deque<int> >(dq);
        ford_johnson(tab);
        ford_johnson(dq);
        cout << "After Vector :" << endl;
        display<vector<vector <int> >, vector<int> >(tab);
        cout << "After deque :" << endl;
        display<deque<deque <int> >, deque<int> >(dq);
    }
    catch (std::excpetion &e)
    {
        cerr << e.what() << endl;
        return (1);
    }
    return (0);
}