/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:38:46 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/18 17:06:27 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip> 

PhoneBook::PhoneBook(): _last(-1), _nb(0)
{
}

void	PhoneBook::add()
{
	_last = (_last + 1) % 8;
	_contacts[_last].registering();
	if (_nb < 8)
		_nb++;
}

void	PhoneBook::display()
{
	int	i;

	std::cout << "//    ID    ||First Name||Last Name || Nickname \\\\" << std::endl;
	if (_last == -1)
	{
		std::cout << "\\\\          ||          ||          ||          //" << std::endl;
		return;
	}
	i = 0;
	while (i < _nb - 1)
	{
		std::cout << "||" << std::setw(10) << i 
		<< "||" << std::setw(10) << _contacts[i].get_member(1).substr(0, 10) 
		<< "||" << std::setw(10) << _contacts[i].get_member(0).substr(0, 10) 
		<< "||" << std::setw(10) << _contacts[i].get_member(2).substr(0, 10) 
		<< "||" << std::endl;
		i++;
	}
	std::cout << "\\\\" << std::setw(10) << i 
	<< "||" << std::setw(10) << _contacts[i].get_member(1).substr(0, 10) 
	<< "||" << std::setw(10) << _contacts[i].get_member(0).substr(0, 10) 
	<< "||" << std::setw(10) << _contacts[i].get_member(2).substr(0, 10) 
	<< "//" << std::endl;
}

int		PhoneBook::get_last()
{
	return (_last);
}

void	PhoneBook::one_disp(int i)
{
	_contacts[i].display();
}




