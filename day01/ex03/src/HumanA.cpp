/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:46:52 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/27 15:28:38 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    cout << _name << " attack with their " << _weapon.getType() << endl;
}

HumanA::HumanA(char *name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}