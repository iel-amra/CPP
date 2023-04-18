/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:41:34 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/17 19:00:25 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

Animal::Animal() : type("Animal")
{   
}

Animal::~Animal()
{
}

Animal::Animal(const Animal & animal) : type(animal.type)
{
}

void Animal::operator=(const Animal & animal)
{
    type = animal.type;
}

std::string Animal::getType() const
{
    return(type);
}