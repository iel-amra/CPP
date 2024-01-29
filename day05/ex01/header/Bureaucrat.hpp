/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:39:51 by iel-amra          #+#    #+#             */
/*   Updated: 2023/12/21 13:21:14 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <Form.hpp>
#include <iostream>

class Form;

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
    Bureaucrat(const std::string & name, const unsigned int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat & ref);
    Bureaucrat &operator=(const Bureaucrat & rhs);
    std::string getName() const;
    unsigned int getGrade() const;
    void promote();
    void demote();
    void sign(Form & form) const;

private:
    const std::string   _name;
    unsigned int       _grade;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & bu);

#endif