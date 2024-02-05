#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

bool check(std::string &input);
float calculate(std::string &input);

class bad_input_exception : public std::exception
{
    virtual const char* what() const throw();
};

#endif