/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/21 16:01:47 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

using   std::cout;
using   std::endl;

Dog::Dog() : Animal()
{
    type = "Dog";
    cout << "Newborn dog" << endl;
}

Dog::~Dog()
{
    cout << "An dog died" << endl;
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
    cout << "An dog has been cloned, oh no !" << endl;
}

void Dog::operator=(const Dog & dog)
{
    Animal::operator=(dog);
}

void Dog::makeSound() const
{
    cout << "Wouaf !!" << endl;
}