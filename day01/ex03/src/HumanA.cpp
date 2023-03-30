/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:46:52 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/30 19:29:18 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << _name << " attack with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(const char *name, Weapon &weapon) : _name(name), _weapon(weapon)
{
}