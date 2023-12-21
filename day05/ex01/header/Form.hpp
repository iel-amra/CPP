/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:19:04 by iel-amra          #+#    #+#             */
/*   Updated: 2023/11/13 13:00:26 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <Bureaucrat.hpp>

class Bureaucrat;

class Form
{
public:

    class GradeTooHighException : public std::exception
    {
    public:
        char const *what() const throw();
    };
    
    class GradeTooLowException : public std::exception
    {
    public:
        char const *what() const throw();
    };

    Form();
    ~Form();
    Form(const Form & ref);
    Form &operator=(const Form & rhs);

    Form(const std::string & name, const unsigned int gradeToSign,
            const unsigned int gradeToExecute);
    std::string getName() const;
    bool getSigned() const;
    unsigned int getGradeToSign() const;
    unsigned int getGradeToExecute() const;

    void beSigned(const Bureaucrat & bu) throw(...);

private:
    const std::string           _name;
    bool                        _signed;
    const unsigned int          _gradeToSign;
    const unsigned int          _gradeToExecute;
};

std::ostream & operator<<(std::ostream & os, const Form & form);

#endif