/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:41:33 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 16:06:55 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal & animal);
    void operator=(const Animal & animal);

    virtual void makeSound() const;
    std::string getType() const;

protected:
    std::string type;
};

#endif