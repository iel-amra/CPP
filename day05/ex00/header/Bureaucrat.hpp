/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:39:51 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/03 19:59:17 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
public:

    class GradeTooHighException : public std::exception
    {
    public :
        char const *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public :
        char const *what() const throw();
    };

    Bureaucrat();
    Bureaucrat(const std::string & name);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat & ref);
    Bureaucrat &operator=(const Bureaucrat & rhs);
    std::string getName() const;
    unsigned int getGrade() const;
    void promote();
    void demote();

private:
    const std::string   _name;
    unsigned int       _grade;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & bu);

#endif