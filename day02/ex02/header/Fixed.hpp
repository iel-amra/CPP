/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:18 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/04 17:29:17 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP 
# include <cmath>
# include <iostream>

class Fixed
{
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &nb);
    
    void operator=(const Fixed &nb);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

    Fixed(const int nb);
    Fixed(const float nb);
    float toFloat( void ) const;
    int toInt( void ) const;

    int operator<(const Fixed & nb) const;
    int operator<=(const Fixed & nb) const;
    int operator>(const Fixed & nb) const;
    int operator>=(const Fixed & nb) const;
    int operator==(const Fixed & nb) const;
    int operator!=(const Fixed & nb) const;

    Fixed operator+(const Fixed & nb) const;
    Fixed operator-(const Fixed & nb) const;
    Fixed operator*(const Fixed & nb) const;
    Fixed operator/(const Fixed & nb) const;

    Fixed operator++(int);
    Fixed &operator++();

    static Fixed &min(Fixed &nb1, Fixed &nb2);
    static const Fixed &min(const Fixed &nb1, const Fixed &nb2);
    static Fixed &max(Fixed &nb1, Fixed &nb2);
    static const Fixed &max(const Fixed &nb1, const Fixed &nb2);

private:
    int _RawBits;
    static int const _NbFractBits;
};

std::ostream& operator<<(std::ostream &os, const Fixed &nb);

#endif