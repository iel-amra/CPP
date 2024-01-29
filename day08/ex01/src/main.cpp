#include <iostream>
#include <vector>
#include <Span.hpp>
#include <cstdlib>
#include <time.h>

using std::cout;
using std::endl;

int main(int argc, char **argv)
{
    int nb;
    if (argc > 2)
    {
        cout << "Stop it, you dumbass. I know you're name, Ihab, I know where you live !" << endl;
        return (1);
    }
    else if (argc != 2)
        nb = 10000;
    else
        nb = strtol(argv[1], NULL, 10);
    if (nb > 1000000)
    {
        cout << "Stop it, you dumbass. I know you're name, Ihab, I know where you live !" << endl;
        return (1);
    }
    Span sp = Span(nb);
    std::vector<int> filler(nb);
    std::srand(time(NULL));
    generate(filler.begin(), filler.end(), &std::rand);
    sp.fillRange(filler.begin(), filler.end());
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception & e)
    {
        cout << e.what() << endl; 
    }
    try
    {
        sp.addNumber(3);
    }
    catch (std::exception & e)
    {
        cout << e.what() << endl; 
    }
    return (0);
}