/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:25:13 by belam             #+#    #+#             */
/*   Updated: 2024/01/22 10:59:15 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <templates.hpp>

using std::cout;
using std::endl;

int main()
{
    {
        int a = 2, b = 5, c = 5;

        swap(a, b);
        cout << "a : " << a << ", b : " << b << endl;
        cout << "min : "<< min(a, b) << endl;
        cout << "max : "<< max(a, b) << endl;
        min(c, a) -= 3;
        cout << "a : " << b << endl;
        max(a, b) -= 1;
        cout << "b : " << b << endl << endl;
    }

    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return (0);
}