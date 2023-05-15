/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:28:55 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 17:40:49 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(ShrubberyCreationForm, 145, 137)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & ref) :
AForm(ref),
_target(ref._target)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
AForm(ShrubberyCreationForm, 145, 137),
_target(target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
}