/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:07 by iel-amra          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/04/17 18:51:37 by belam            ###   ########.fr       */
=======
/*   Updated: 2023/04/17 16:51:53 by iel-amra         ###   ########.fr       */
>>>>>>> fd75c8bbc8a87985f73a3a18edbd80eb4607b039
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <Animal.hpp>
# include <Brain.hpp>

class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog & dog);
    void operator=(const Dog & dog);

    void makeSound() const;
    const std::string getMainIdea() const;
    void setMainIdea(const std::string & idea);

private:
    Brain *_brain;
};

#endif