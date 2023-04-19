/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/19 12:44:26 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Character.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <MateriaSource.hpp>

using std::cout;
using std::endl;

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    IMateriaSource* copy = new MateriaSource(*(MateriaSource *) src);
    tmp = copy->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    ICharacter *me2 = new Character(* (Character *) me);
    delete me;
    me2->use(0, *bob);
    me2->use(1, *bob);
    me2->use(3, *bob);
    me2->use(4, *bob);
    delete bob;
    delete me2;
    delete src;
    delete copy;
    return 0;
}