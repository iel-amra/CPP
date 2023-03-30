/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:44:43 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/30 19:29:31 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP  
# include <string>

class Weapon
{
public:
    const   std::string & getType();
    void    setType(const char *type); 
    Weapon(const char *type);

private:
    std::string _type;
};

#endif