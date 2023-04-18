/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:13:38 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/18 16:41:59 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Constructors
Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	(void) copy;
}


// Destructor
Cure::~Cure()
{
}


// Operators
Cure & Cure::operator=(const Cure &assign)
{
	(void) assign;
	return *this;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
