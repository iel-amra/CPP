/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 20:00:54 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <ShrubberyCreationForm.hpp>

using std::cout;
using std::endl;

int main()
{
    Bureaucrat Maire("Maire", 75);
    Bureaucrat AgentEdf("Agend EDF", 130);

    cout << Maire << endl;
    cout << AgentEdf << endl << endl;

    ShrubberyCreationForm hey("HEEEYO");
    hey.execute(Maire);
    
    return 0;
}