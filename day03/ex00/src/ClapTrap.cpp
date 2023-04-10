/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:54:32 by belam             #+#    #+#             */
/*   Updated: 2023/04/10 18:39:49 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ClapTrap.hpp>

ClapTrap::ClapTrap() : _name(), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constuctor called." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &a) : 
_name(a._name), 
_hitPoints(a._hitPoints), 
_energyPoints(a._energyPoints),
_attackDamage(a._attackDamage)
{
    std::cout << "ClapTrap copy constuctor called." << std::endl;
}

void ClapTrap::operator=(const ClapTrap &a)
{
    _name = a._name;
    _hitPoints = a._hitPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
}

ClapTrap::ClapTrap(const std::string &name): 
_name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap string constuctor called." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap "  << _name << " is dead."
        << std::endl;
        return;
    }  
    else if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap "  << _name << " doesn't have energy left to attack."
        << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " attacked " << target << " causing " 
                << _attackDamage << " damage." << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap "  << _name << " is dead."
        << std::endl;
        return;
    }  
    std::cout << "ClapTrap " << _name << " has taken "
                << amount << " damage." << std::endl;
    _hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap "  << _name << " is dead."
        << std::endl;
        return;
    }  
    else if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap "  << _name << " doesn't have energy left to repair."
        << std::endl;
        return;
    }
    std::cout << "ClapTrap " << _name << " has repaired itself and gains "
                << amount << " hit points." << std::endl;
    _hitPoints += amount;
    _energyPoints--;
}