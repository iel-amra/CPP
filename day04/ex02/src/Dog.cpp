/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/18 18:18:59 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog() : Animal()
{
    type = "Dog";
    _brain = new Brain();
}

Dog::~Dog()
{
    delete _brain;
}

Dog::Dog(const Dog & dog) : Animal(dog)
{
    _brain = new Brain();
    *_brain = *dog._brain;
}

void Dog::operator=(const Dog & dog)
{
    Animal::operator=(dog);
    *_brain = *dog._brain;
}

void Dog::makeSound() const
{
    std::cout << "Wouaf !!" << std::endl;
}

const std::string Dog::getMainIdea() const
{
    return(_brain->getIdea(0));
}

void Dog::setMainIdea(const std::string & idea)
{
    _brain->setIdea(idea, 0) ;
}