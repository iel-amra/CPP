#include "PmergeMe.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;
using std::deque;

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

deque<deque <int> > parse_for_deq(int argc, char **argv)
{
    deque<deque <int> > tab(argc - 1);

    for (int i = 0; i < argc - 1; ++i)
        tab[i].push_back(atoi(argv[i + 1]));
    return (tab);
}

vector<int> operator+(vector<int> a, const vector<int> &b)
{
    a.insert(a.end(), b.begin(), b.end());
    return (a);
}

deque<int> operator+(deque<int> a, const deque<int> &b)
{
    a.insert(a.end(), b.begin(), b.end());
    return (a);
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
    else if (i == t)
    {
        t = ((t * 3 - q) * 2 - q) / 3;
        q *= -1;
        i = ((t * 3 - q) * 2 - q) / 3 - 1;
    }
    else
        --i;
    if (i >= size)
        i = size - 1;
    return (i);
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
    {
        next_i(index, temp.size());
        // cout << index << " ";
        tab.insert(std::lower_bound(tab.begin(), tab.end(), temp[index]), temp[index]);
    }
    if (odd.size() != 0)
        tab.insert(std::lower_bound(tab.begin(), tab.end(), odd), odd);
}

void ford_johnson(deque<deque <int> > &dq)
{
    int size;
    deque <int> odd;

    if (dq.size() == 1)
        return;
    size = dq[0].size();
    if (dq.size() % 2 == 1)
        odd = dq[dq.size() - 1];
    for (int i = 0; i < static_cast<int>(dq.size()) / 2; i++)
        dq[i] = max(dq[2 * i], dq[2 * i + 1]) + min(dq[2 * i], dq[2 * i + 1]);
    dq.resize(dq.size() / 2);
    ford_johnson(dq);
    deque<deque <int> > temp(dq.size());
    for (int i = 0; i < static_cast<int>(dq.size()); i++)
    {
        temp[i] = deque<int>(dq[i].begin() + size, dq[i].end());
        dq[i].resize(size);
    }
    dq.insert(dq.begin(), temp[0]);
    int index = 0;
    for (int i = 0; i < static_cast<int>(temp.size()) - 1; i++)
    {
        next_i(index, temp.size());
        dq.insert(std::lower_bound(dq.begin(), dq.end(), temp[index]), temp[index]);
    }
    if (odd.size() != 0)
        dq.insert(std::lower_bound(dq.begin(), dq.end(), odd), odd);
}