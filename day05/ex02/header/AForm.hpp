/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:19:04 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 17:30:04 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <Bureaucrat.hpp>

class Bureaucrat;

class AForm
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

    AForm();
    ~AForm();
    AForm(const AForm & ref);
    AForm &operator=(const AForm & rhs);

    AForm(const std::string & name, const unsigned int gradeToSign,
            const unsigned int gradeToExecute);
    std::string getName() const;
    bool getSigned() const;
    unsigned int getGradeToSign() const;
    unsigned int getGradeToExecute() const;

    void beSigned(const Bureaucrat & bu);
    void tryExec(Bureaucrat const & executor) const;

private:
    virtual void execute(Bureaucrat const & executor) const = 0;
    const std::string           _name;
    bool                        _signed;
    const unsigned int          _gradeToSign;
    const unsigned int          _gradeToExecute;
};

std::ostream & operator<<(std::ostream & os, const AForm & form);

#endif