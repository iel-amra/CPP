/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:28:55 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 14:10:57 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PresidentialPardonForm.hpp>
using std::cout;
using std::endl;

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & ref) :
AForm(ref),
_target(ref._target)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
    (void) rhs;
    return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("PresidentialPardonForm", 25, 5),
_target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    cout << _target << " has been pardoned by Zaphod Beeblebrox" << endl;
}