/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:50:44 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/25 16:51:45 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>
#include <cstdlib> 


bool isNumber(std::string input)
{
	if (!input[0])
		return false;
	for (int i = 0; input[i]; i++)
		if (!std::isdigit(input[i]))
			return false;
	return true;
}

int	main()
{
	PhoneBook	my_book;
	std::string	input;

	do
	{
		std::cout << "PhoneBook >> ";
		std::getline (std::cin, input);
		if (input == "ADD")
			my_book.add();
		else if (input == "SEARCH")
		{
			my_book.display();
			std::cout << "Please enter a user ID >> ";
			std::getline (std::cin, input);
			if (std::cin.eof());
			else if (!isNumber(input) || strtol(input.c_str(), NULL, 10) < 0 || strtol(input.c_str(), NULL, 10) > my_book.get_last())
				std::cout << "Wrong ID" << std::endl;
			else
				my_book.one_disp(strtol (input.c_str(), NULL, 10));
		}
		else if (input != "EXIT" && !std::cin.eof())
			std::cout << "Use : SEARCH, ADD, or EXIT" << std::endl;
	}
	while (input != "EXIT" && !std::cin.eof());
	if (std::cin.eof())
		std::cout << std::endl;
	return (0);
} 
