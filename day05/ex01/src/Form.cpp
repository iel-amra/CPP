/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:18:58 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 17:08:42 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Form.hpp>

Form::Form() :
_name(),
_signed(false),
_gradeToSign(0),
_gradeToExecute(0)
{
}

Form::~Form()
{
}

Form::Form(const Form & ref) :
_name(ref._name),
_signed(ref._signed),
_gradeToSign(ref._gradeToSign),
_gradeToExecute(ref._gradeToExecute)
{
}

Form & Form::operator=(const Form & rhs)
{
    _signed = rhs._signed;
    return (*this);
}

Form::Form(const std::string & name, const unsigned int gradeToSign,
        const unsigned int gradeToExecute) :
_name(name),
_signed(false),
_gradeToSign(gradeToSign),
_gradeToExecute(gradeToExecute)
{
    if (_gradeToSign > 150 || _gradeToExecute > 150)
        throw GradeTooLowException();
    if (_gradeToSign == 0 || _gradeToExecute == 0)
        throw GradeTooHighException();
}

std::string Form::getName() const
{
    return(_name);
}

bool Form::getSigned() const
{
    return(_signed);
}

unsigned int Form::getGradeToSign() const
{
    return(_gradeToSign);
}

unsigned int Form::getGradeToExecute() const
{
    return(_gradeToExecute);
}

void Form::beSigned(const Bureaucrat & bu)
{
    if (_gradeToSign < bu.getGrade())
        throw GradeTooLowException();
    _signed = true;
}

std::ostream & operator<<(std::ostream & os, const Form & form)
{
    std::string str;

    if (form.getSigned())
        str = "Signed";
    else
        str = "Unsigned";
    os << str << " form " 
        << form.getName() << " needs " 
        << form.getGradeToSign() << " to get signed and "
        << form.getGradeToExecute() << " to be executed.";
    return (os);
}

char const *Form::GradeTooHighException::what() const throw()
{
    return ("Form : Grade Too High");
}

char const *Form::GradeTooLowException::what() const throw()
{
    return ("Form : Grade Too Low");
}