/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:28:55 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 14:12:10 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <RobotomyRequestForm.hpp>
using std::cout;
using std::endl;

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & ref) :
AForm(ref),
_target(ref._target)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    (void) rhs;
    return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
AForm("RobotomyRequestForm", 72, 45),
_target(target)
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    (void) executor;
    if (static_cast<double>(std::rand()) / RAND_MAX > 0.5)
        cout << "DDRRRrrrRRRRRrrrrrrrrrrrrRRRrrrRRRRRrrRRRRR" << endl
        << _target << " has been robotomized" << endl;
    else
        cout << "Failed to robotomized " << _target << endl;
}