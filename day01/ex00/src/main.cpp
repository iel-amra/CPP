/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/24 13:45:33 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
    Zombie *Dylan = newZombie("Dylan");
    if (!Dylan)
        return (1);
    Dylan->announce();
    randomChump("Kevin");
    delete Dylan;
    return (0);
}