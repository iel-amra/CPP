/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 22:01:44 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/05 13:58:05 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() :  _name("")
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(const std::string &name) :  _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character( const Character & src ) :  _name(src._name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = src;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] != NULL)
			delete _materia[i];
}


Character &Character::operator=( Character const & rhs )
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] != NULL)
			delete _materia[i];
	for (int i = 0; i < 4; i++)
		if (rhs._materia[i] != NULL)
			_materia[i] = rhs._materia[i]->clone();
		else
			_materia[i] = NULL;
	return *this;
}

std::string const & Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria* m)
{	
	int	i = 0;
	while (_materia[i])
		i++;
	if (i <= 3)
		_materia[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	_materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return;
	if (_materia[idx])
		_materia[idx]->use(target);
}
