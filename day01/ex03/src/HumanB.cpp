/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:56:31 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/30 19:29:11 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (_weapon)
        std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
    else
        std::cout << _name << " attack with their bare hands" << std::endl;
}

HumanB::HumanB(const char *name) : _name(name), _weapon(NULL)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}