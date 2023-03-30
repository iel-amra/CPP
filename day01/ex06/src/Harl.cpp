/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 21:45:21 by belam             #+#    #+#             */
/*   Updated: 2023/03/30 23:34:55 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    _keys[0] = "DEBUG";
    _f[0] = &Harl::debug;
    _keys[1] = "INFO";
    _f[1] = &Harl::info;
    _keys[2] = "WARNING";
    _f[2] = &Harl::warning;
    _keys[3] = "ERROR";
    _f[3] = &Harl::error;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my "
    "7XL-double-cheese-triple-pickle-specialketchup burger."
    "I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
    << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some " 
    << "extra bacon for free.I’ve been coming for " 
    << "years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    int i ;

    i = 0;
    while (level.compare(_keys[i]))
        i++;
    if (i < 0 || i > 3)
        return ;
    
    (this->*_f[i])();
}

void Harl::complain( int i )
{
    if (i < 0 || i > 3)
        return ;
    std::cout << "[" << _keys[i] << "]" << std::endl;
    (this->*_f[i])();
    std::cout << std::endl;
}

void Harl::filtered_complain(std::string level)
{
    int i ;
    i = 0;
    while (level.compare(_keys[i]))
        i++;
    switch (i)
    {
        case 0:
            complain(0);
            [[fallthrough]];
        case 1:
            complain(1);
            [[fallthrough]];
        case 2:
            complain(2);
            [[fallthrough]];
        case 3:
            complain(3);
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}