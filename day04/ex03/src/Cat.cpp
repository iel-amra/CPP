/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 18:25:01 by iel-amra         ###   ########.fr       */
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