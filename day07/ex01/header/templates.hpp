/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:36:49 by belam             #+#    #+#             */
/*   Updated: 2023/05/23 15:34:59 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>

template <typename T>
void display(T elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void iter(T *array, int nb, void (*f)(T & elem))
{
    for (int i = 0; i < nb; i++)
        (*f)(array[i]);
}

#endif