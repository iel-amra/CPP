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

int	time_is_inf(struct timeval t1, struct timeval t2)
{
	if (t1.tv_sec > t2.tv_sec)
		return (0);
	if (t1.tv_sec < t2.tv_sec)
		return (1);
	if (t1.tv_usec < t2.tv_usec)
		return (1);
	return (0);
}

struct timeval	time_add(struct timeval t1, struct timeval t2)
{
	struct timeval	time;

	time.tv_usec = (t1.tv_usec + t2.tv_usec) % 1000000;
	time.tv_sec = t1.tv_sec + t2.tv_sec + (t1.tv_usec + t2.tv_usec > 1000000);
	return (time);
}

struct timeval	ms_to_timeval(unsigned long ms)
{
	struct timeval	time;

	time.tv_usec = ms * 1000 % 1000000;
	time.tv_sec = ms / 1000;
	return (time);
}

struct timeval	time_minus(struct timeval t1, struct timeval t2)
{
	struct timeval	time;

	time.tv_usec = (1000000 + t1.tv_usec - t2.tv_usec) % 1000000;
	time.tv_sec = t1.tv_sec - t2.tv_sec - (t1.tv_usec < t2.tv_usec);
	return (time);
}

void	print_t(struct timeval time)
{
	cout << time.tv_sec << time.tv_usec << endl;
}

int main(const int argc, char **argv)
{
    vector<vector <int> > tab;
    deque<deque <int> > dq;
    struct timeval  begin, middle, end; 

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
        gettimeofday(&begin, NULL);
        ford_johnson(tab);
        gettimeofday(&middle, NULL);
        ford_johnson(dq);
        gettimeofday(&end, NULL);
        cout << "After: ";
        display<vector<vector <int> >, vector<int> >(tab);
        // cout << "After deque :" << endl;
        // display<deque<deque <int> >, deque<int> >(dq);
        print_t(time_minus(middle, begin));
    }
    catch (std::exception &e)
    {
        cerr << e.what() << endl;
        return (1);
    }
    return (0);
}