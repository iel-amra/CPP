/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:06:37 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/24 17:48:47 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <vector>
# include <iostream>

class Span
{
public:
    Span();
    ~Span();
    Span(const Span &ref);
    Span &operator=(const Span &rhs);

    Span(unsigned int nb);
    void addNumber(int nb);
    unsigned int shortestSpan();
    unsigned int longestSpan();
    
    template <typename T>
    void fillRange(T it, T ite);

private:

    std::vector<int>  _array;
    unsigned int    _size;
    unsigned int    _i;
};

template <typename T>
void Span::fillRange(T itb, T ite)
{
    for (T it = itb; it != ite; it++)
        addNumber(*it);
}

#endif