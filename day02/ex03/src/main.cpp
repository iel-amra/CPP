/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/08 15:57:24 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

static bool same_side(Point const  &a, Point const &b, Point const &c, Point const &point)
{
    Fixed const m(b.getY() - a.getY());
    Fixed const n(a.getX() - b.getX());
    Fixed const o((m * a.getX() + n * a.getY()) * -1);

    std::cout << "cX : "<< c.getX() << " | cY : " << c.getY() << std::endl;
    std::cout << "M : "<< m << " | N : " << n << " | O : " << o <<std::endl;
    std::cout << "For C : "<< m * c.getX() + n * c.getY() + o << " | For point : " << m * point.getX() + n * point.getY() + o <<std::endl;
    if ((m * c.getX() + n * c.getY() + o) * (m * point.getX() + n * point.getY() + o) >= 0)
        return (true);
    return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    (void) point;
    const Point triangle[3]{a, b, c};
    
    for (int i = 0; i < 3; i++)
    {
        if (!same_side(triangle [i % 3], triangle [(i + 1) % 3],
            triangle [(i + 2) % 3], point))
        return (false);
    }
    return (true);
}

int main( void ) 
{
    std::cout << bsp(Point(0,0), Point(10,0), Point(0,10), Point(9,1.5)) << std::endl;
    return (0);
}