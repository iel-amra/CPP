/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/04 17:58:33 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
    Animal *animals[6];
    int i;

    for (i = 0; i < 3; i++)
        animals[i] = new Dog();
    for (; i < 6; i++)
        animals[i] = new Cat();

    animals[0]->makeSound();
    animals[5]->makeSound();
    
    for (i = 0; i < 6; i++)
        delete animals[i];

    Dog will;
    Dog robert;
    will.setMainIdea("I'm Robert !");
    robert = will;
    Dog selma(will);
    will.setMainIdea("I was wrong, my name's William !");
    selma.setMainIdea("And mine is Selma !");
    std::cout << robert.getMainIdea() << std::endl;
    std::cout << will.getMainIdea() << std::endl;
    std::cout << selma.getMainIdea() << std::endl;
    return 0;
}