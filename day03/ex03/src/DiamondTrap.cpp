/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:17:04 by belam             #+#    #+#             */
/*   Updated: 2023/04/11 17:20:53 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : 
ClapTrap(), 
FragTrap(), 
ScavTrap(),
name_clap_name(ClapTrap::_name),
_hitPoints(FragTrap::_hitPoints),
_energyPoints(ScavTrap::_energyPoints),
_attackDamage(FragTrap::_attackDamage)
{
}

DiamondTrap::~DiamondTrap()
{
}

DiamondTrap::DiamondTrap(const DiamondTrap &a) : 
ClapTrap(a),
FragTrap(a),
ScavTrap(a),
name_clap_name(ClapTrap::_name),
_hitPoints(FragTrap::_hitPoints),
_energyPoints(ScavTrap::_energyPoints),
_attackDamage(FragTrap::_attackDamage)
{
}

void DiamondTrap::operator=(const DiamondTrap &a)
{
    _name = a._name;
    _hitPoints = a._hitPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
}

DiamondTrap::DiamondTrap(const std::string &name) : 
ClapTrap(name),
FragTrap(name),
ScavTrap(name),
_name(name),
name_clap_name(ClapTrap::_name),
_hitPoints(FragTrap::_hitPoints),
_energyPoints(ScavTrap::_energyPoints),
_attackDamage(FragTrap::_attackDamage)
{
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    if (_hitPoints <= 0)
    {
        std::cout << "DiamondTrap "  << _name
        << " is dead, it can't have any philosophical thoughts !"
        << std::endl;
        return;
    }  
    std::cout   << "My name is " << _name
                << " And my ClapTrap name is "
                << name_clap_name
                << ". Great ! I'm the same person !!" << std::endl;
}