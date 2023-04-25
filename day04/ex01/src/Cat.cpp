/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/25 10:08:04 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

using   std::cout;
using   std::endl;


Cat::Cat() : Animal()
{
    type = "Cat";
    _brain = new Brain();
    cout << "Newborn cat" << endl;
}

Cat::~Cat()
{
    delete _brain;
    cout << "An cat died" << endl;
}

Cat::Cat(const Cat & cat) : Animal(cat)
{
    _brain = new Brain();
    *_brain = *cat._brain;
    cout << "An cat has been cloned, oh no !" << endl;
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