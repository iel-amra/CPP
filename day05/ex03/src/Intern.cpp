/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:09:12 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 18:34:54 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern()
{
}

Intern::Intern(const Intern & cpy)
{
    *this = cpy;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(const Intern & rhs)
{
    (void) rhs;
    return (*this);
}

AForm *Intern::getPardonForm(const std::string & target) const
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::getShrubberyForm(const std::string & target) const
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::getRobotForm(const std::string & target) const
{
    return (new RobotomyRequestForm(target));
}