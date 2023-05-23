/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:25:13 by belam             #+#    #+#             */
/*   Updated: 2023/05/23 15:47:59 by iel-amra         ###   ########.fr       */
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
    iter((int [3]){1, 2, 3}, 3, &display);
    return (0);
}