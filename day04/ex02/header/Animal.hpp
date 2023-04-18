/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:41:33 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/18 18:16:08 by belam            ###   ########.fr       */
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

    virtual void makeSound() const = 0;
    std::string getType() const;

protected:
    std::string type;
};

#endif