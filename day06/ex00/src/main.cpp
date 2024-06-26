/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:25:03 by belam             #+#    #+#             */
/*   Updated: 2023/05/22 10:25:04 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ScalarConverter.hpp>

int main(int argc, char **argv)
{
    (void) argc;
    if (argc != 2)
    {
        std::cout << "Bad number of arguments" << std::endl;
        return (0);
    }
    if (!ScalarConverter::convert(argv[1]))
        ScalarConverter::display();
    return (0);
}