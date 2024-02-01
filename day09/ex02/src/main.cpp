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
    time_t start, middle, end; 

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
        cout << "Before: ";
        display<vector<vector <int> >, vector<int> >(tab);
        // cout << "deque :" << endl;
        // display<deque<deque <int> >, deque<int> >(dq);
        time(&start);
        ford_johnson(tab);
        time(&middle);
        ford_johnson(dq);
        time(&end);
        cout << "After: ";
        display<vector<vector <int> >, vector<int> >(tab);
        // cout << "After deque :" << endl;
        // display<deque<deque <int> >, deque<int> >(dq);
        cout << double(middle - start) << end;
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
        return (1);
    }
    return (0);
}