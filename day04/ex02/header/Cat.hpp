/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:07 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/17 18:51:33 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <Animal.hpp>
# include <Brain.hpp>

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat & cat);
    void operator=(const Cat & cat);

    void makeSound() const;

private:
    Brain *_brain;
};

#endif