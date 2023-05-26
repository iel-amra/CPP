/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:25:13 by belam             #+#    #+#             */
/*   Updated: 2023/05/22 11:46:13 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Serializer.hpp>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Data    someData;
    
    cout << "Data address            :" << &someData << endl
         << "Data address serialized :" 
         << Serializer::deserialize(Serializer::serialize(&someData)) 
         << endl;
    return (0);
}