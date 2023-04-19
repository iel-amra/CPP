/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:08:44 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/19 11:07:40 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = copy;
}


// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] != NULL)
			delete _materia[i];
}


// Operators
MateriaSource & MateriaSource::operator=(const MateriaSource &assign)
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] != NULL)
			delete _materia[i];
	for (int i = 0; i < 4; i++)
		if (assign._materia[i] != NULL)
			_materia[i] = assign._materia[i]->clone();
		else
			_materia[i] = NULL;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int	i = 0;
	while (_materia[i])
		i++;
	if (i <= 3)
		_materia[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (_materia[i] != NULL && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	return (NULL);
}
