/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/04 18:01:45 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
    //Animal animal;
    Animal *animals[6];
    int i;

    for (i = 0; i < 3; i++)
        animals[i] = new Dog();
    for (; i < 6; i++)
        animals[i] = new Cat();

    animals[0]->makeSound();
    animals[5]->makeSound();
    
    Dog will;
    Dog robert;
    will.setMainIdea("I'm Robert !");
    robert = will;
    will.setMainIdea("I was wrong, my name's William !");
    std::cout << robert.getMainIdea() << std::endl;
    std::cout << will.getMainIdea() << std::endl;

    for (i = 0; i < 6; i++)
        delete animals[i];
    return 0;
}