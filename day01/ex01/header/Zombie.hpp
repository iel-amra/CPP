/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:59:08 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/21 14:09:40 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP


# include <iostream>

class Zombie
{
public:
    void    announce();
    void    change_name(const char *name);
    Zombie();
    Zombie(const char *name);
    ~Zombie();
    
private:
    std::string _name;
};

#endif