/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:07 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/13 17:30:32 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include <Animal.hpp>
#include <Brain.hpp>

class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat & cat);
    void operator=(const Cat & cat);

    void makeSound() const;
    const std::string getMainIdea() const;
    void setMainIdea(const std::string & idea);

private:
    Brain *_brain;
};

#endif