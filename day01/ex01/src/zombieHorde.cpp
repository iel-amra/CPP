/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:24:44 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/22 16:59:57 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *horde = new Zombie[N];
    
    for (int i = 0; i < N; i++)
         horde[i].change_name(name.c_str());
    return (horde);
}