/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:07:32 by belam             #+#    #+#             */
/*   Updated: 2023/04/11 17:08:58 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP
# define DIAMOND_TRAP
# include <ScavTrap.hpp>
# include <FragTrap.hpp>

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
   DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &a);
    void operator=(const DiamondTrap &a);

    DiamondTrap(const std::string &name);
    void attack(const std::string& target);
    
    void whoAmI();
    
private:
    std::string _name;
    std::string &name_clap_name;
    int &_hitPoints;
    int &_energyPoints;
    int &_attackDamage;
};

#endif