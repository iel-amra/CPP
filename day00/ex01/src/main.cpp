/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:50:44 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/18 16:46:26 by iel-amra         ###   ########.fr       */
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
			else if (stoi(input) < 0 || stoi(input) > my_book.get_last())
				std::cout << "Wrong ID" << std::endl;
			else
				my_book.one_disp(stoi(input));
		}
		else if (strcmp(input.c_str(), "EXIT") && !std::cin.eof())
			std::cout << "Use : SEARCH, ADD, or EXIT" << std::endl;
	}
	while (strcmp(input.c_str(), "EXIT") && !std::cin.eof());
	return (0);
} 
