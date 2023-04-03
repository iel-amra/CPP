/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:09 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/03 16:35:43 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_NbFractBits = 8;

Fixed::Fixed() : _RawBits(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &nb) : _RawBits(nb.getRawBits())
{
}

void Fixed::operator=(const Fixed nb)
{
   this->setRawBits(nb.getRawBits());
}

int Fixed::getRawBits( void ) const
{
    return(_RawBits);
}

void Fixed::setRawBits( int const raw )
{
    _RawBits = raw;
}

Fixed(int nb) : 
    _RawBits(nb << _NbFractBits)
{
    _RawBits &= 0x7FFFFFFF;
    _RawBits += (nb < 0) << 31;
}

Fixed(float nb)
{
    int mantissa;
    int exposant;
    char sign;

    mantissa = nb & 0x3FFFFF;
    sign = nb >> 31;
    exposant = (nb << 1 >> 24) - 127;
    _RawBits = mantissa * exposant
}

float toFloat( void ) const
{
    
}

int toInt( void ) const
{
    
}