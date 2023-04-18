/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:41:33 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 16:26:12 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    ~WrongAnimal();
    WrongAnimal(const WrongAnimal & wrongAnimal);
    void operator=(const WrongAnimal & wrongAnimal);

    void makeSound() const;
    std::string getType() const;

protected:
    std::string type;
};

#endif