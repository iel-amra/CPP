/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/12/21 12:52:38 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>
#include <Form.hpp>

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
    Form thisform("Bob", 145, 145);
    try
    {
        thisform.beSigned(Bureaucrat());
    }
    catch (std::exception & e)
    {
        cout << e.what() << endl;
    }
    cout << thisform << endl;
    Bureaucrat("Jerem", 12).sign(thisform);
    Zeus.sign(thisform);
    cout << thisform << endl;
    
    return 0;
}