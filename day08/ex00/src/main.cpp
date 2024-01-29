#include <iostream>
#include <vector>
#include <easyfind.hpp>

using std::cout;
using std::endl;

int main()
{
    std::vector<int> tab(10, 5);
    *easyfind(tab, 5) = 8;
    *easyfind(tab, 5) = 50;
    tab[6] = 20;
    *easyfind(tab, 20) = 42;
    cout << std::boolalpha << "Not found : " << (easyfind(tab, 55) == tab.end()) << endl;
    for (std::vector<int>::const_iterator it = tab.begin(); it != tab.end(); it++)
        cout << *it << endl;
    return (0);
}