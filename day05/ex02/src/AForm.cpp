/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:18:58 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 17:43:07 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <AForm.hpp>

AForm::AForm() :
_name(),
_signed(false),
_gradeToSign(0),
_gradeToExecute(0)
{
}

AForm::~AForm()
{
}

AForm::AForm(const AForm & ref) :
_name(ref._name),
_signed(ref._signed),
_gradeToSign(ref._gradeToSign),
_gradeToExecute(ref._gradeToExecute)
{
}

AForm & AForm::operator=(const AForm & rhs)
{
    _signed = rhs._signed;
    return (*this);
}

AForm::AForm(const std::string & name, const unsigned int gradeToSign,
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

std::string AForm::getName() const
{
    return(_name);
}

bool AForm::getSigned() const
{
    return(_signed);
}

unsigned int AForm::getGradeToSign() const
{
    return(_gradeToSign);
}

unsigned int AForm::getGradeToExecute() const
{
    return(_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat & bu)
{
    if (_gradeToSign < bu.getGrade())
        throw GradeTooLowException();
    _signed = true;
}

std::ostream & operator<<(std::ostream & os, const AForm & form)
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

char const *AForm::GradeTooHighException::what() const throw()
{
    return ("AForm : Grade Too High");
}

char const *AForm::GradeTooLowException::what() const throw()
{
    return ("AForm : Grade Too Low");
}