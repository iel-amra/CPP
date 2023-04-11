/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 16:49:27 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/11 14:38:34 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP 
# include "Fixed.hpp"

class Point
{
private:
    const Fixed _x;
    const Fixed _y;

public:
    Point();
    Point(const float & x, const float & y);
    Point(const Point & pt);
    ~Point();

    const Fixed & getX() const;
    const Fixed & getY() const;
};

std::ostream &operator<<(std::ostream &os, Point point);

#endif