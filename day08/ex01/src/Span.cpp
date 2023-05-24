/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:19:18 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/24 17:43:51 by iel-amra         ###   ########.fr       */
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

unsigned int Span::shortestSpan()
{
    std::vector<int>   diff(_i);
    std::sort(_array.begin(), _array.end());
    std::adjacent_difference(_array.begin(), _array.end(), diff.begin());
    return (*std::min_element(diff.begin(), diff.end()));
}

unsigned int Span::longestSpan()
{
    return (*std::max_element(_array.begin(), _array.end())
        - *std::min_element(_array.begin(), _array.end()));
}