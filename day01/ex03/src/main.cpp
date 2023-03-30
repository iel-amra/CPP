/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/30 19:29:02 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"


int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA emma("Emma", club);
        emma.attack();
        club.setType("some other type of club");
        emma.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    {
        HumanB bob("Bob");
        bob.attack();
        Weapon club = "a gun";
        bob.setWeapon(club);
        bob.attack();
        club.setType("a bazooka");
        bob.attack();
        club.setType("a nuclear wepaon");
        bob.attack();
        club.setType("KAAAAAAAAAAAAAAAAAMMMMMMMMMMMEEEEEEEEEEEEEHHHHHHHHHAAAAAAAAAAAMEEEEEEEEHAAAAAAAAAAAAAAA");
        bob.attack();
    }
    return 0;
}