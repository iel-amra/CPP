/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 17:58:32 by belam             #+#    #+#             */
/*   Updated: 2023/04/11 15:28:28 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP
# define SCAV_TRAP
# include <ClapTrap.hpp>

class ScavTrap : public virtual ClapTrap
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &a);
    void operator=(const ScavTrap &a);

    ScavTrap(const std::string &name);
    void attack(const std::string& target);

    void guardGate();
 
private:
};

#endif