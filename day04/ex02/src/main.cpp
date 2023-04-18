/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/17 19:02:44 by belam            ###   ########.fr       */
=======
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/13 17:37:28 by iel-amra         ###   ########.fr       */
>>>>>>> fd75c8bbc8a87985f73a3a18edbd80eb4607b039
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongCat.hpp>

int main()
{
<<<<<<< HEAD
    //Animnal animal;
=======
>>>>>>> fd75c8bbc8a87985f73a3a18edbd80eb4607b039
    Animal *animals[100];
    int i;
    
    for (i = 0; i < 50; i++)
        animals[i] = new Dog();
    for (; i < 100; i++)
        animals[i] = new Cat();

    animals[30]->makeSound();
    animals[80]->makeSound();

    for (i = 0; i < 100; i++)
        delete animals[i];
    return 0;
}