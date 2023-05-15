/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/03 12:24:15 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::min( a, b ) << std::endl;
    
    std::cout << std::endl << "Custom tests" << std::endl;
    Fixed c(5.4f);
    std::cout << b + c << std::endl;
    std::cout << c - b << std::endl;
    std::cout << b * c << std::endl;
    std::cout << b / c << std::endl;
    std::cout << Fixed(0) << std::endl;
    std::cout << b / Fixed(0) << std::endl;
    std::cout << (b > c) << std::endl;
    std::cout << (b < c) << std::endl;
    std::cout << (b < b) << std::endl;
    std::cout << (b > b) << std::endl;
    std::cout << (b >= c) << std::endl;
    std::cout << (b <= c) << std::endl;
    std::cout << (b <= b) << std::endl;
    std::cout << (b >= b) << std::endl;
    std::cout << (b == c) << std::endl;
    std::cout << (b == b) << std::endl;
    std::cout << (b != c) << std::endl;
    std::cout << (b != b) << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}