/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/24 14:03:17 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout    << "The memory address of the string variable : "
                << &str
                << std::endl
                << "The memory address held by stringPTR : "
                << stringPTR
                << std::endl
                << "The memory address held by stringREF : "
                << &stringREF
                << std::endl
                << "The value of the string variable : "
                << str
                << std::endl
                << "The value pointed to by stringPTR : "
                << *stringPTR
                << std::endl
                << "The value pointed to by stringREF : "
                << stringREF
                << std::endl;
}