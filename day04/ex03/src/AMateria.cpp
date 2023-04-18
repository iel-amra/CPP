/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:13:42 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/18 16:40:09 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// Constructors
AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria() : _type()
{
}

AMateria::AMateria(const AMateria &copy) : _type()
{
	(void) copy;
}


// Destructor
AMateria::~AMateria()
{
}


// Operators
AMateria & AMateria::operator=(const AMateria &assign)
{
	(void) assign;
	return *this;
}

std::string const & AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}