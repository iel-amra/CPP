/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:41:34 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 15:41:23 by iel-amra         ###   ########.fr       */
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

void Animal::makeSound() const
{
    std::cout << "Huuuuuuuum" << std::endl;
}

std::string Animal::getType() const
{
    return(type);
}