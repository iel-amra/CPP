#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <vector>
# include <stdlib.h>

bool check(int argc,char **argv);
std::vector<std::vector <int> > parse_for_vect(int argc, char **argv);
void ford_johnson(std::vector<std::vector <int> > &tab);

template <typename T>
void display(T & container)
{
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        for (int i = 0; i != (int)(*it).size(); i++)
        {
            std::cout << (*it)[i] << std::endl;
        }
    }
}

#endif