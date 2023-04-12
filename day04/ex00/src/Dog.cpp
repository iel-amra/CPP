/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 14:50:37 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal()
{
    type = "Dog";
}

Dog::~Dog()
{
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
}

void Dog::operator=(const Dog & dog)
{
    Animal::operator=(dog);
}

void Dog::makeSound() const
{
    std::cout << "Wouaf !!" << std::endl;
}