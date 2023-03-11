/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:38:46 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/11 16:57:53 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

PhoneBook::PhoneBook(): _last(-1), _nb(0)
{
}

void	PhoneBook::add()
{
	_last = (last + 1) % 8;
	_contacts[last].registering();
	_nb++;
}

void	PhoneBook::display()
{
	cout << "Hello";	
}
