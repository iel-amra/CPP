/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:13:36 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/18 21:58:17 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>

class Ice : public AMateria
{
	public:
		// Constructors
		Ice();
		Ice(const Ice &copy);
		
		// Destructor
		~Ice();
		
		// Operators
		Ice & operator=(const Ice &assign);
		void use(ICharacter& target);
		Ice* clone() const;
};

#endif