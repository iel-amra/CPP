/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:56:31 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/27 15:28:40 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (_weapon)
        cout << _name << " attack with their " << _weapon->getType() << endl;
    else
        cout << _name << " attack with their bare hands" << endl;
}

HumanB::HumanB(char *name) : _name(name)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}