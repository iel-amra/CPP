/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/12/21 14:42:39 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>
#include <Intern.hpp>

using std::cout;
using std::endl;

int main()
{
    Bureaucrat  Maire("Maire", 2);
    Intern      Jackson;
    AForm       *form;

    cout << Maire << endl;

    form = Jackson.makeForm("shrubbery creation", "Forest");
    Maire.executeForm(*form);
    delete form;
    form = Jackson.makeForm("robotomy request", "Bender");
    Maire.executeForm(*form);
    delete form;
    form = Jackson.makeForm("presidential pardon", "Borgir");
    Maire.executeForm(*form);
    delete form;
    form = Jackson.makeForm("presidential", "Bob");
    cout << form << endl;

    return 0;
}