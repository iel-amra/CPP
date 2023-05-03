/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:39:54 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/03 16:50:54 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat() : _name(""), _grade(150)
{
}

Bureaucrat(const std::string & name) : _name(name), _grade(150)
{
}

~Bureaucrat()
{
}

Bureaucrat(const Bureaucrat & ref) : _name(ref._name)
{
    *this = ref;
}

Bureaucrat &operator=(const Bureaucrat & rhs)
{
    _grade = rhs->grade;
}

std::string getName()
{
    return (_name);
}

unsigned char getGrade()
{
    return (grade);
}

void promote()
{
    if (_grade == 1)
        throw GradeTooHighException;
    _grade++;
}

void demote()
{
    if (_grade == 150)
        throw GradeTooLowException;
    _grade--;
}

ostream & operator<<(ostream & os, const Bureaucrat & bu)
{
    
}