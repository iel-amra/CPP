/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:41:34 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 15:41:23 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{   
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal::WrongAnimal(const WrongAnimal & wrongAnimal) : type(wrongAnimal.type)
{
}

void WrongAnimal::operator=(const WrongAnimal & wrongAnimal)
{
    type = wrongAnimal.type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Vous savez, moi je ne crois pas qu’il y ait de bonne ou de mauvaise situation." << std::endl;
}

std::string WrongAnimal::getType() const
{
    return(type);
}