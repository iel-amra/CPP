/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:43:20 by belam             #+#    #+#             */
/*   Updated: 2023/03/30 22:30:23 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
public :
    void complain( std::string level );
    Harl();

private :
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    std::string _keys[4];
    void    (Harl::*_f[4])(void);
};