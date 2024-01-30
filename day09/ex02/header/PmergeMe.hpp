#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <vector>
# include <list>
# include <stdlib.h>
# include <cmath>
# include <algorithm>

bool check(int argc,char **argv);
std::vector<std::vector <int> > parse_for_vect(int argc, char **argv);
void ford_johnson(std::vector<std::vector <int> > &tab);

template <typename T>
void display(T & container)
{
    for (typename T::iterator it = container.begin(); it != container.end(); ++it)
    {
        for (T it2 = it->begin(); it2 != it->end(); ++it2)
        {
            std::cout << *it2 << " ";
        }
        std::cout << std::endl;
    }
}

#endif