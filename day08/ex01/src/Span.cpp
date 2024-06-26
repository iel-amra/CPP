/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:19:18 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/25 17:04:44 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <numeric>
#include <iostream>


Span::Span() : _array(), _size(0), _i(0)
{   
}

Span::~Span()
{
}

Span::Span(const Span &ref) : 
_array(ref._array),
_size(ref._size), 
_i(ref._i)
{    
}

Span &Span::operator=(const Span &rhs)
{
    _array = rhs._array;
    _size = rhs._size; 
    _i = rhs._i;
    return (*this);
}

Span::Span(unsigned int nb) : _array(), _size(nb), _i(0)
{
}

void Span::addNumber(int nb)
{
    if (_i >= _size)
        throw (std::exception());
    _array.push_back(nb);
    _i++;
}

static long long int absl(long long int nb)
{
    if (nb < 0)
        return (-nb);
    return (nb);
}

template<typename T>
std::ostream &operator<<(std::ostream & os, std::vector<T> tab)
{
    typename std::vector<T>::iterator ite = tab.end();
    for (typename std::vector<T>::iterator it = tab.begin(); it != ite; it++)
        os << *it << std::endl;
    return (os);
}

unsigned int Span::shortestSpan()
{
    if (_size <= 1)
        throw (std::exception());
    std::vector<long long int>   diff(_i);
    std::sort(_array.begin(), _array.end());
    std::adjacent_difference(_array.begin(), _array.end(), diff.begin());
    std::transform( diff.begin(), diff.end(), 
        diff.begin(), &absl );
    return (*std::min_element(diff.begin() + 1, diff.end()));
}

unsigned int Span::longestSpan()
{
    if (_size <= 1)
        throw (std::exception());
    return (static_cast<long long int>(*std::max_element(_array.begin(), _array.end()))
        - static_cast<long long int>(*std::min_element(_array.begin(), _array.end())));
}