/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/10 18:54:28 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ScavTrap.hpp>

int main( void ) 
{
    {
        ClapTrap Alice("Alice");
        for (int i = 0; i < 9; i++)
            Alice.attack("Bob");
        Alice.takeDamage(5);
        Alice.beRepaired(10);
        Alice.attack("Bob");
        Alice.beRepaired(10000);
        Alice.takeDamage(100);
        Alice.attack("Bob");
        Alice.beRepaired(314);
    }
    std::cout << "=====================================" << std::endl;
    {
        ScavTrap Alice("Alice");
        for (int i = 0; i < 49; i++)
            Alice.attack("Bob");
        Alice.takeDamage(5);
        Alice.guardGate();
        Alice.beRepaired(10);
        Alice.attack("Bob");
        Alice.beRepaired(10000);
        Alice.takeDamage(1000);
        Alice.attack("Bob");
        Alice.beRepaired(314);
        Alice.guardGate();
    }
    return (0);
}