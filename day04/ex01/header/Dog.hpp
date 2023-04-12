/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:07 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 18:13:00 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
#include <Animal.hpp>
#include <Brain.hpp>

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog & dog);
    void operator=(const Dog & dog);

    void makeSound() const;

private:
    Brain *_brain;
};

#endif