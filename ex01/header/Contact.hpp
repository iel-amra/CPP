/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:00:49 by iel-amra          #+#    #+#             */
/*   Updated: 2023/02/15 16:35:54 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	std::string	LastName;
	std::string	FirstName;
	std::string	Nickname;
	std::string	PhoneNumber;
	std::string	DarkestSecret;

public:
	void	display();
	string	get_member(int	i);
};

#endif
