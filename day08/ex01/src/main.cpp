#include <iostream>
#include <vector>
#include <Span.hpp>
#include <cstdlib>
#include <time.h>

using std::cout;
using std::endl;

int main()
{
    Span sp = Span(10000);
    std::vector<int> filler(10000);
    std::srand(time(NULL));
    generate(filler.begin(), filler.end(), &std::rand);
    sp.fillRange(filler.begin(), filler.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return (0);
}