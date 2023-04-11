/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:15:26 by belam             #+#    #+#             */
/*   Updated: 2023/04/10 22:18:29 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <FragTrap.hpp>

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constuctor called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &a) : ClapTrap(a)
{
    std::cout << "FragTrap copy constuctor called." << std::endl;
}
void FragTrap::operator=(const FragTrap &a)
{
    _name = a._name;
    _hitPoints = a._hitPoints;
    _energyPoints = a._energyPoints;
    _attackDamage = a._attackDamage;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap string constuctor called." << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

void FragTrap::highFivesGuys(void)
{
    if (_hitPoints <= 0)
    {
        std::cout << "Fragtrap "  << _name << " is dead."
        << std::endl;
        return;
    }
    std::cout << "Fragtrap " << _name << " express his desire to perform a high five !" << std::endl;
}