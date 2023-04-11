/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:09 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/08 14:43:25 by iel-amra         ###   ########.fr       */
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

Fixed::Fixed(const Fixed &nb) : _RawBits()
{
    *this = nb;
}

void Fixed::operator=(const Fixed &nb)
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

Fixed::Fixed(const int nb)
{
    _RawBits = nb * pow(2, _NbFractBits);
}

Fixed::Fixed(const float nb)
{
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

int Fixed::operator<(const Fixed & nb) const
{
    return (this->getRawBits() < nb.getRawBits());
}

int Fixed::operator<=(const Fixed & nb) const
{
    return (this->getRawBits() <= nb.getRawBits());
}

int Fixed::operator>(const Fixed & nb) const
{
    return (this->getRawBits() > nb.getRawBits());
}

int Fixed::operator>=(const Fixed & nb) const
{
    return (this->getRawBits() >= nb.getRawBits());
}

int Fixed::operator==(const Fixed & nb) const
{
    return (this->getRawBits() == nb.getRawBits());
}

int Fixed::operator!=(const Fixed & nb) const
{
    return (this->getRawBits() != nb.getRawBits());
}


Fixed Fixed::operator+(const Fixed & nb) const
{
    return (this->toFloat() + nb.toFloat());
}

Fixed Fixed::operator-(const Fixed & nb) const
{
    return (this->toFloat() - nb.toFloat());
}

Fixed Fixed::operator*(const Fixed & nb) const
{
    return (Fixed(this->toFloat() * nb.toFloat()));
}

Fixed Fixed::operator/(const Fixed & nb) const
{
    return (Fixed(this->toFloat() / nb.toFloat()));
}


Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    _RawBits += 1;
    return(temp);
}

Fixed &Fixed::operator++()
{
    _RawBits += 1;
    return (*this);
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return(nb2);
}

const Fixed &Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1 < nb2)
        return (nb1);
    return(nb2);
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
    if (nb1 > nb2)
        return (nb1);
    return(nb2);   
}

const Fixed &Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1 > nb2)
        return (nb1);
    return(nb2);    
}