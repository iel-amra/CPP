/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:15:30 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/11 15:29:49 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "principal.hpp"

class PhoneBook
{
private:
	int	_last;
	int	_nb;
	Contact _contacts[8];

public:
	PhoneBook();
	void	add();
	void	display();
};

#endif
