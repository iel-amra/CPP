/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 13:40:07 by iel-amra          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/04/17 18:51:33 by belam            ###   ########.fr       */
=======
/*   Updated: 2023/04/17 16:51:58 by iel-amra         ###   ########.fr       */
>>>>>>> fd75c8bbc8a87985f73a3a18edbd80eb4607b039
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
    const std::string getMainIdea() const;
    void setMainIdea(const std::string & idea);

private:
    Brain *_brain;
};

#endif