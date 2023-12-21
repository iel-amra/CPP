/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/12/21 14:27:48 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <RobotomyRequestForm.hpp>

using std::cout;
using std::endl;

int main()
{
    Bureaucrat Maire("Maire", 1);
    Bureaucrat AgentEdf("Agend EDF", 130);

    cout << Maire << endl;
    cout << AgentEdf << endl << endl;

    ShrubberyCreationForm hey("HEEEYO");
    hey.execute(Maire);
    PresidentialPardonForm coucou("Grimoir");
    AForm *test = &coucou;
    Maire.executeForm(*test);
    RobotomyRequestForm last("ROBOT");
    Maire.executeForm(last);
    
    return 0;
}