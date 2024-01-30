/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:25:13 by belam             #+#    #+#             */
/*   Updated: 2024/01/22 11:06:34 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <templates.hpp>

using std::cout;
using std::endl;

int main()
{
    iter("Bonjour", 7, &display);
    cout << endl;
    int tab[3] = {1, 2, 3};
    iter(tab, 3, &add);
    iter(tab, 3, &display);
    return (0);
}