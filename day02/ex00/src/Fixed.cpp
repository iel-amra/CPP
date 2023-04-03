/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:09 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/03 15:18:59 by iel-amra         ###   ########.fr       */
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