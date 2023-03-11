/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:00:49 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/11 16:38:53 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
# define CONTACT_HPP

class Contact
{
private:
	std::string _data[5];	

public:
	void		registering();
	void		display();
	std::string	get_member(const int	i);
};

#endif
