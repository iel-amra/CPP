/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:38:46 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/14 14:39:50 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

PhoneBook::PhoneBook(): _last(-1), _nb(0)
{
}

void	PhoneBook::add()
{
	_last = (_last + 1) % 8;
	_contacts[_last].registering();
	_nb++;
}

void	PhoneBook::display()
{
	std::cout << "Hello";
}
