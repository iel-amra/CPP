#include "PmergeMe.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::list;

bool check(int argc, char **argv)
{
    string nb;
    for (int i = 1; i < argc; ++i)
    {
        nb = argv[i];
        if (nb.find_first_not_of("0123456789") != string::npos
            || strlen(argv[i]) == 0 || strlen(argv[i]) > 10
            || (strlen(argv[i]) == 10 && nb > "2147483647"))
            return (1);
    }
    return (0);
}

vector<vector <int> > parse_for_vect(int argc, char **argv)
{
    vector<vector <int> > tab(argc - 1);

    for (int i = 0; i < argc - 1; ++i)
        tab[i].push_back(atoi(argv[i + 1]));
    return (tab);
}

vector<int> operator+(vector<int> a, const vector<int> &b)
{
    a.insert(a.end(), b.begin(), b.end());
    return (a);
}

list<int> operator+(list<int> a, list<int> b)
{
    a.splice(a.begin(), b);
    return (a);
}

bool operator<(const list<int> & a, const list<int> & b)
{
    if (a.front() < b.front())
        return (true);
    return (false);
}

int next_i(int &i, int size)
{
    static int t = 1;
    static int q = -1;

    if (i == 0)
    {
        t = 1;
        q = -1;
        i = 2;
    }
    if (i == t)
    {
        t = ((t * 3 - q) * 2 - q) / 3;
        q *= -1;
        i = ((t * 3 - q) * 2 - q) / 3 - 1;
    }
    else
        --i;
    if (i >= size)
        i = size - 1;
    return(i);
}

void ford_johnson(vector<vector <int> > &tab)
{
    int size;
    vector <int> odd;

    if (tab.size() == 1)
        return;
    size = tab[0].size();
    if (tab.size() % 2 == 1)
        odd = tab[tab.size() - 1];
    for (int i = 0; i < static_cast<int>(tab.size()) / 2; i++)
        tab[i] = max(tab[2 * i], tab[2 * i + 1]) + min(tab[2 * i], tab[2 * i + 1]);
    tab.resize(tab.size() / 2);
    ford_johnson(tab);
    vector<vector <int> > temp(tab.size());
    for (int i = 0; i < static_cast<int>(tab.size()); i++)
    {
        temp[i] = vector<int>(tab[i].begin() + size, tab[i].end());
        tab[i].resize(size);
    }
    tab.insert(tab.begin(), temp[0]);
    int index = 0;
    for (int i = 0; i < static_cast<int>(temp.size()) - 1; i++)
        tab.insert(std::lower_bound(tab.begin(), tab.end(), temp[next_i(index, temp.size())]), temp[index]);
    if (odd.size() != 0)
        tab.insert(std::lower_bound(tab.begin(), tab.end(), odd), odd);
}

void ford_johnson(list<list <int> > &lst)
{
    int size;
    list <int> odd;

    if (lst.size() == 1)
        return;
    size = lst.front().size();
    if (lst.size() % 2 == 1)
    {
        odd = lst.back();
        lst.erase(--lst.end());
    }
    for (list<list <int> >::iterator it = lst.begin(); it != lst.end();)
    {
        *it = std::max(*it, *++it) + std::min(*--it, *++it);
        it = lst.erase(it);
    }
    // cout << "Before :" << endl;
    // display<list<list <int> >, list<int> >(lst);
    ford_johnson(lst);
    // cout << "After :" << endl;
    // display<list<list <int> >, list<int> >(lst);
    // (void) size;

    list<list <int> > temp();
    for (list<list <int> >::iterator it = lst.begin(); it != lst.end(); ++it)
    {
        temp[i] = vector<int>(tab[i].begin() + size, lst[i].end());
    }
    // lst.insert(lst.begin(), temp[0]);
    // for (int i = 2; i < static_cast<int>(temp.size()); next_i(i, temp.size()))
    //     lst.insert(std::lower_bound(lst.begin(), lst.end(), temp[i]), temp[i]);
    // if (odd.size() != 0)
    //     lst.insert(std::lower_bound(lst.begin(), lst.end(), odd), odd);
}