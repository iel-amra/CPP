/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:54:29 by belam             #+#    #+#             */
/*   Updated: 2023/04/10 19:17:45 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP
# define CLAP_TRAP
# include <iostream>
# include <string>

class ClapTrap
{
public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const ClapTrap &a);
    void operator=(const ClapTrap &a);

    ClapTrap(const std::string &name);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif