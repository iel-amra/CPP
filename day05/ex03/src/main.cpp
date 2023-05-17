/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 15:21:44 by iel-amra         ###   ########.fr       */
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
    Bureaucrat Maire("Maire", 2);
    Bureaucrat AgentEdf("Agend EDF", 130);

    cout << Maire << endl;
    cout << AgentEdf << endl << endl;

    ShrubberyCreationForm hey("HEEEYO");
    PresidentialPardonForm borgir("Borgir");
    RobotomyRequestForm blender("Blender");
    Maire.executeForm(hey);
    Maire.executeForm(borgir);
    cout << std::endl;
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    Maire.executeForm(blender);
    cout << std::endl;
    AgentEdf.executeForm(borgir);
    return 0;
}