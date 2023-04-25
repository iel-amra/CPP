/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:00:49 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/25 17:11:27 by iel-amra         ###   ########.fr       */
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
	std::string	get_member(const int i);
	std::string	get_member_spe(const int i);
};

#endif
