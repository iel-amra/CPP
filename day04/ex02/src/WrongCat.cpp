/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 16:36:29 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
}

WrongCat::WrongCat(const WrongCat & wrongCat) : WrongAnimal(wrongCat)
{
}

void WrongCat::operator=(const WrongCat & wrongCat)
{
    WrongAnimal::operator=(wrongCat);
}

void WrongCat::makeSound() const
{
    std::cout << "Meeeeuuuuuuh" << std::endl;
}