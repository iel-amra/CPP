/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:09:12 by iel-amra          #+#    #+#             */
/*   Updated: 2023/11/14 13:56:18 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Intern.hpp>

Intern::Intern()
{
    _init();
}

Intern::Intern(const Intern & cpy)
{
    _init();
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

AForm *Intern::makeForm(const std::string & type, const std::string & target) const
{
    int i = 0;

    while (i < 3 && _map[i] != type)
        i++;
    if (i == 3)
        return (NULL);
    return ((this->*_creator[i])(target));
}

AForm *Intern::_getPardonForm(const std::string & target) const
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::_getShrubberyForm(const std::string & target) const
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::_getRobotForm(const std::string & target) const
{
    return (new RobotomyRequestForm(target));
}

void Intern::_init()
{
    _creator[0] = &Intern::_getPardonForm;
    _creator[1] = &Intern::_getShrubberyForm;
    _creator[2] = &Intern::_getRobotForm;
    _map[0] = "presidential pardon";
    _map[1] = "shrubbery creation";
    _map[2] = "robotomy request";
}
