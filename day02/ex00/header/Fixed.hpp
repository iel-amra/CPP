/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:11:18 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/03 15:14:37 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP 

class Fixed
{
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &nb);
    void operator=(const Fixed nb);

    int getRawBits( void ) const;
    void setRawBits( int const raw );

private:
    int _RawBits;
    static int const _NbFractBits;
};

#endif