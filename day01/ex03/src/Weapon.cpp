/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:44:28 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/27 15:28:25 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const Weapon::string & getType()
{
    return (type);
}

void Weapon::setType(std::string type)
{
    _type = type;
}