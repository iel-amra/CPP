/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:50:44 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/19 14:33:43 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstring>

int	main()
{
	PhoneBook	my_book;
	std::string	input;

	do
	{
		std::cout << "PhoneBook >> ";
		std::getline (std::cin, input);
		if (!strcmp(input.c_str(), "ADD"))
			my_book.add();
		else if (!strcmp(input.c_str(), "SEARCH"))
		{
			my_book.display();
			std::cout << "Please enter a user ID >> ";
			std::getline (std::cin, input);
			if (std::cin.eof());
			else if (input == "" || stoi(input) < 0 || stoi(input) > my_book.get_last())
				std::cout << "Wrong ID" << std::endl;
			else
				my_book.one_disp(stoi(input));
		}
		else if (strcmp(input.c_str(), "EXIT") && !std::cin.eof())
			std::cout << "Use : SEARCH, ADD, or EXIT" << std::endl;
	}
	while (input != "EXIT" && !std::cin.eof());
	return (0);
} 
