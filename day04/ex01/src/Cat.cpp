/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/13 17:30:24 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat() : Animal()
{
    type = "Cat";
    _brain = new Brain();
}

Cat::~Cat()
{
    delete _brain;
}

Cat::Cat(const Cat & cat) : Animal(cat)
{
    _brain = new Brain();
    *_brain = *cat._brain;
}

void Cat::operator=(const Cat & cat)
{
    Animal::operator=(cat);
    *_brain = *cat._brain;
}

void Cat::makeSound() const
{
    std::cout << "Miaouuuuu ~~~" << std::endl;
}

const std::string Cat::getMainIdea() const
{
    return(_brain->getIdea(0));
}

void Cat::setMainIdea(const std::string & idea)
{
    _brain->setIdea(idea, 0) ;
}