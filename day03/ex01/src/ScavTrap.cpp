/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:58:06 by belam             #+#    #+#             */
/*   Updated: 2023/04/10 18:54:06 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScavTrap.hpp>

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constuctor called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &a) : ClapTrap(a)
{
    std::cout << "ScavTrap copy constuctor called." << std::endl;
}
void ScavTrap::operator=(const ScavTrap &a)
{
    _name = a._name;
    _hitPoints = a._hitPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "ScavTrap string constuctor called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}
void ScavTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap "  << _name << " is dead."
        << std::endl;
        return;
    }  
    else if (_energyPoints <= 0)
    {
        std::cout << "ScavTrap "  << _name << " doesn't have energy left to attack."
        << std::endl;
        return;
    }
    std::cout << "ScavTrap " << _name << " attacked " << target << " causing " 
                << _attackDamage << " damage." << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{   
    if (_hitPoints <= 0)
    {
        std::cout << "ScavTrap "  << _name << " is dead."
        << std::endl;
        return;
    }  
    std::cout << "ScavTrap " << _name << " is entering guard mode." << std::endl;
}