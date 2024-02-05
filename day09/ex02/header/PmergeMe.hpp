#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <vector>
# include <deque>
# include <stdlib.h>
# include <cmath>
# include <algorithm>
# include <bits/stdc++.h>
# include <sys/time.h>

bool check(int argc,char **argv);
std::vector<std::vector <int> > parse_for_vect(int argc, char **argv);
std::deque<std::deque <int> > parse_for_deq(int argc, char **argv);
void ford_johnson(std::vector<std::vector <int> > &tab);
void ford_johnson(std::deque<std::deque <int> > &tab);

template <typename T, typename U>
void display(T & container)
{
    for (typename T::iterator it = container.begin(); it != container.end(); ++it)
    {
        for (typename U::iterator it2 = it->begin(); it2 != it->end(); ++it2)
        {
            std::cout << *it2 << " ";
        }
        // std::cout << " || ";
    }
    std::cout << std::endl;
}

#endif