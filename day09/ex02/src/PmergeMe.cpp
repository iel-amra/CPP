#include "PmergeMe.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

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

vector<int> operator+(vector<int> a, vector<int> b)
{
    a.insert(a.begin(), b.begin(), b.end());
    return (a);
}

vector<int> &min(vector<int> &a, vector<int> &b)
{
    if (a[0] < b[0])
        return (a);
    return (b);
}

vector<int> &max(vector<int> &a, vector<int> &b)
{
    if (a[0] > b[0])
        return (a);
    return (b);
}

void ford_johnson(vector<vector <int> > &tab)
{

    int size = tab[0].size();

    if (tab.size() == 1)
        return;

    for (int i = 0; i < static_cast<int>(tab.size()) / 2; i++)
        tab[i] = max(tab[2 * i], tab[2 * i + 1]) + min(tab[2 * i], tab[2 * i + 1]);
    tab.resize(tab.size() / 2);
    ford_johnson(tab);
    cout << "Size :" << tab.size() << endl;
    display(tab);
    for (int i = 0; i < static_cast<int>(tab.size()); i++)
    {
        cout << i << " Size = " << tab.size() << endl;
        if (static_cast<int>(tab[i].size()) != size)
        {
            int j = 0;
            while (static_cast<int>(tab.size()) != j && tab[i][size] > tab[j][0])
                j++;
            tab.insert(tab.begin() + j + 1, vector<int>(tab[i].begin() + size, tab[i].end()));
            tab[i].resize(size);
        }
    }
}