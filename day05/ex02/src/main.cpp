/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 17:20:56 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

using std::cout;
using std::endl;

int main()
{
    Bureaucrat Maire("Maire", 75);
    Bureaucrat AgentEdf("Agend EDF", 130);

    cout << Maire << endl;
    cout << AgentEdf << endl << endl;
    
    return 0;
}