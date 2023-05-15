/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:39:54 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/04 15:46:37 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat() : _name(""), _grade(150)
{
}

Bureaucrat::Bureaucrat(const std::string & name) : _name(name), _grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const Bureaucrat & ref) : _name(ref._name)
{
    *this = ref;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
    _grade = rhs._grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return (_name);
}

unsigned int Bureaucrat::getGrade() const
{
    return (_grade);
}

void Bureaucrat::demote()
{
    if (_grade == 150)
        throw GradeTooLowException();
    _grade++;
}

void Bureaucrat::promote()
{
    if (_grade == 1)
        throw GradeTooHighException();
    _grade--;
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & bu)
{
    os << bu.getName() << ", bureaucrat grade " << bu.getGrade() << ".";
    return (os);
}

char const *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade Too High");
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade Too Low");
}