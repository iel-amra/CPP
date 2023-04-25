/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/25 10:16:42 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

using   std::cout;
using   std::endl;


WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    cout << "Newborn wrong cat" << endl;
}

WrongCat::~WrongCat()
{
    cout << "An wrong cat died" << endl;
}

WrongCat::WrongCat(const WrongCat & wrongCat) : WrongAnimal(wrongCat)
{
    cout << "An wrong cat has been cloned, oh no !" << endl;
}

void WrongCat::operator=(const WrongCat & wrongCat)
{
    WrongAnimal::operator=(wrongCat);
}

void WrongCat::makeSound() const
{
    std::cout << "Meeeeuuuuuuh" << std::endl;
}