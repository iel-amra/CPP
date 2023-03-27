/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:59:06 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/22 17:18:31 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const char *name): _name(name)
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << _name << " was brutally killed" << std::endl;
}