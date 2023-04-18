/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:13:40 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/18 22:36:46 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include <Character.hpp>

class ICharacter;

class AMateria
{
	protected:
		const std::string _type;

	public:
		// Constructors
		AMateria(std::string const & type);
		AMateria();
		AMateria(const AMateria &copy);
		
		// Destructor
		virtual ~AMateria();
		
		// Operators
		virtual AMateria & operator=(const AMateria &assign);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);	
};

#endif