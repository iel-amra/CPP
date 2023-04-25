/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:41:34 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/21 16:03:05 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>

using   std::cout;
using   std::endl;

Animal::Animal() : type("Animal")
{
    cout << "Newborn animal" << endl;
}

Animal::~Animal()
{
    cout << "An animal died" << endl;
}

Animal::Animal(const Animal & animal) : type(animal.type)
{
    cout << "An animal has been cloned, oh no !" << endl;
}

void Animal::operator=(const Animal & animal)
{
    type = animal.type;
}

void Animal::makeSound() const
{
    cout << "Huuuuuuuum" << endl;
}

std::string Animal::getType() const
{
    return(type);
}