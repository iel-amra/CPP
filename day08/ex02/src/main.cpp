#include <iostream>
#include <vector>
#include <MutantStack.hpp>
#include <cstdlib>
#include <time.h>

using std::cout;
using std::endl;

int main()
{
    MutantStack<int> a;

    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);

    for (MutantStack<int>::iterator it = a.begin(); it != a.end(); ++it)
        cout << *it << endl;
    // cout << a[0] << endl;
    // cout << a[1] << endl;
    // cout << a[2] << endl;
    // cout << a[3] << endl;
    // cout << a[4] << endl;
    // cout << a[5] << endl;
    return (0);
}