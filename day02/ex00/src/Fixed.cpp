/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:09 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/03 11:18:31 by iel-amra         ###   ########.fr       */
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
    std::cout << "getRawBits member function called" << std::endl;
    return(_RawBits);
}

void Fixed::setRawBits( int const raw )
{
    _RawBits = raw;
}