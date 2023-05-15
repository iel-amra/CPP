/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:09 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/03 11:18:21 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_NbFractBits = 8;

Fixed::Fixed() : _RawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &nb) : _RawBits()
{
    std::cout << "Copy constructor called" << std::endl;
    *this = nb;
}

void Fixed::operator=(const Fixed &nb)
{
    std::cout << "Copy assignment operator called" << std::endl;
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

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    _RawBits = nb * pow(2, _NbFractBits);
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called" << std::endl;
    _RawBits = roundf(nb * pow(2, _NbFractBits));
}

float Fixed::toFloat( void ) const
{
    return (_RawBits / pow(2, _NbFractBits));
}

int Fixed::toInt( void ) const
{
    return (_RawBits / pow(2, _NbFractBits));
}

std::ostream& operator<<(std::ostream &os, const Fixed &nb)
{
    os << nb.toFloat();
    return (os);
}