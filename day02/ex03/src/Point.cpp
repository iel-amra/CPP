/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:50:07 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/08 13:40:48 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}

Point::Point(const float & x, const float & y) : _x(x), _y(y)
{
}

Point::Point(const Point & pt) : _x(pt.getX()) , _y(pt.getY()) 
{
}

Point::~Point()
{
}

const Fixed & Point::getX() const
{
    return (_x);
}

const Fixed & Point::getY() const
{
    return (_y);
}