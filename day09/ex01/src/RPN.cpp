#include "RPN.hpp"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::stack;

bool check(string &input)
{
    int i;

    i = 0;
    while (input[i])
    {
        if (i % 2 == 0 && string("0123456789*-/+").find(input[i]) == string::npos)
            return (1);
        else if(i % 2 == 1 && input[i] != ' ')
            return (1);
        i++;
    }
    return (0);
}

float ext(stack<float>  & numbers)
{
    float r = numbers.top();
    numbers.pop();
    return (r);
}

float calculate(std::string &input)
{
    stack<float>  numbers;
    int         i = 0;

    while (input[i])
    {
        if (input[i] >= '0' && input[i] <= '9')
            numbers.push(static_cast<float>(input[i] - '0'));
        else if (numbers.size() == 1)
                throw std::exception();
        else if (input[i] == '+')
            numbers.push(ext(numbers) + ext(numbers));
        else if (input[i] == '-')
            numbers.push(- (ext(numbers) - ext(numbers)));
        else if (input[i] == '*')
            numbers.push(ext(numbers) * ext(numbers));
        else if (input[i] == '/')
            numbers.push(1 / ext(numbers) * ext(numbers));
        if (input[++i])
            ++i;
    }
    if (numbers.size() != 1)
        throw std::exception();
    return (numbers.top());
}