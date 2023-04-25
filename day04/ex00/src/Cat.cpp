/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/21 15:58:44 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

using   std::cout;
using   std::endl;

Cat::Cat() : Animal()
{
    type = "Cat";
    cout << "Newborn cat" << endl;
}

Cat::~Cat()
{
    cout << "An cat died" << endl;
}

Cat::Cat(const Cat & cat) : Animal(cat)
{
    cout << "An cat has been cloned, oh no !" << endl;
}

void Cat::operator=(const Cat & cat)
{
    Animal::operator=(cat);
}

void Cat::makeSound() const
{
    std::cout << "Miaouuuuu ~~~" << std::endl;
}