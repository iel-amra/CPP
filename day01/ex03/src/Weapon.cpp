/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:44:28 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/30 19:29:24 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string & Weapon::getType()
{
    return (_type);
}

void Weapon::setType(const char *type)
{
    _type = type;
}

Weapon::Weapon(const char *type) : _type(type)
{    
}