/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/10 17:44:23 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ClapTrap.hpp>

int main( void ) 
{
    ClapTrap Alice("Alice");

    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.attack("Bob");
    Alice.takeDamage(5);
    Alice.beRepaired(10);
    Alice.attack("Bob");
    Alice.beRepaired(10000);
    Alice.takeDamage(100);
    Alice.attack("Bob");
    Alice.beRepaired(314);
    return (0);
}