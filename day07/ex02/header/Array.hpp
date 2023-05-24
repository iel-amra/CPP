/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:36:49 by belam             #+#    #+#             */
/*   Updated: 2023/05/24 10:05:32 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>

template <typename T>
class Array
{
public:
    Array();
    Array(Array const & ref);
    ~Array();
    Array &operator=(Array const & rhs);

    Array(int nb);
    T &operator[](unsigned int nb) const;
    unsigned int size() const;
private:
    T   *_array;
    unsigned int _nb;  
};

#include <Array.tpp>

#endif