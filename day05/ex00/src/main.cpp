/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/10/26 15:31:31 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

using std::cout;
using std::endl;

int main()
{
    Bureaucrat Kratos("Kratos");
  
    cout << Kratos << endl;
    try
    {
        Kratos.demote();
    }
    catch (std::exception & e)
    {
        cout << e.what() << endl;
    }
    for (int i = 0; i < 149; i++)
    {
        Kratos.promote();
        if (i % 20 == 19)
            cout << Kratos << endl;
    }
    cout << Kratos << endl;

    try
    {
        Kratos.promote();
    }
    catch (std::exception & e)
    {
        cout << e.what() << endl;
    }
    
    Bureaucrat Zeus("Zeus"); 
    Zeus = Kratos;
    cout << Zeus << endl;
    Zeus = Bureaucrat();
    cout << Zeus << endl;
    
    return 0;
}