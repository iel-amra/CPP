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

void next_i3(int &i)
{
    static int t = 1;
    static int q = 1;

    cout <<"Entree i :" << i << endl;
    if (i == t)
    {
        t = ((t * 3 - q) * 2 - q) / 3;
        if (t == 1)
        {
            q *= -1;
            t = 3;
        }
        q *= -1;
        i = ((t * 3 - q) * 2 - q) / 3;
        cout <<" t :" << t << endl;
    }
    else
        --i;
    cout <<"Sortie i :" << i << endl;
}

void next_i2(int &i)
{
    int j = i;

    if (!(i & 1))
    {
        i--;
        return;
    }
    if ((j & 3) == 3)
        j--;
    j = j ^ (j >> 1);
    if (j & (j + 1))
        i--;
    else
        i = i * 4 + ((i + 2) & 3) - 2;
}

void next_i(int &i)
{
    int t = 0;
    int k = 1;
    //cout <<"Entree i :" << i << endl;
    do
    {
        t = (pow(2, k + 1) + pow(-1, k)) / 3;
        k++;
    //cout <<" t :" << t << endl;
    }
    while(t < i);
    k++;
    if (t > i)
        i--;
    else
        i = (pow(2, k + 1) + pow(-1, k)) / 3;
    //cout <<"Sortie i :" << i << endl;
}

void ford_johnson(vector<vector <int> > &tab)
{
    for (int i = 2; i < 100;)
    {
        int j = i;
        int k = i;
        next_i3(j);
        next_i2(k);
        if (k != j)
            cout << i << " " << k << " " << j << endl;
        i = k;
        
    }
    return;

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
    for (int i = 1; i < static_cast<int>(temp.size()); next_i(i))
    {
        int j = 0;
        while (static_cast<int>(tab.size()) != j && temp[i][0] > tab[j][0])
            j++;
        tab.insert(tab.begin() + j, temp[i]);
    }
    if (odd.size() != 0)
    {
        int j = 0;
        while (static_cast<int>(tab.size()) != j && odd[0] > tab[j][0])
            j++;
        tab.insert(tab.begin() + j, odd);
    }
}