/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/25 10:09:00 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

using   std::cout;
using   std::endl;

Dog::Dog() : Animal()
{
    type = "Dog";
    _brain = new Brain();
    cout << "Newborn dog" << endl;
}

Dog::~Dog()
{
    delete _brain;
    cout << "An dog died" << endl;
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
    _brain = new Brain();
    *_brain = *dog._brain;
    cout << "An dog has been cloned, oh no !" << endl;
}

void Dog::operator=(const Dog & dog)
{
    Animal::operator=(dog);
    *_brain = *dog._brain;
}

void Dog::makeSound() const
{
    cout << "Wouaf !!" << endl;
}

const std::string Dog::getMainIdea() const
{
    return(_brain->getIdea(0));
}

void Dog::setMainIdea(const std::string & idea)
{
    _brain->setIdea(idea, 0) ;
}