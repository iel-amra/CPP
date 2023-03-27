/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/24 13:48:41 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Zombie* zombieHorde( int N, std::string name );

int main()
{
    int n = 10;
    Zombie *Bob = zombieHorde(n, "Bob");
    if (!Bob)
        return (1);
    for (int i = 0; i < 10; i++)
    {
        Bob[i].announce();
    }
    delete[] Bob;
}