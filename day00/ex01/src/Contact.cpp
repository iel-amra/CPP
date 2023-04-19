/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:34:50 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/19 14:39:13 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	Contact::registering()
{
	while (_data[0] == "" && !std::cin.eof()) 
	{
		std::cout << "Please enter your last name." << std::endl;
		std::getline (std::cin, _data[0]);
	}
	while (_data[1] == "" && !std::cin.eof()) 
	{
		std::cout << "Please enter your fisrt name." << std::endl;
		std::getline (std::cin, _data[1]);
	}
	while (_data[2] == "" && !std::cin.eof()) 
	{
		std::cout << "Please enter your nickname." << std::endl;
		std::getline (std::cin, _data[2]);
	}
	while (_data[3] == "" && !std::cin.eof()) 
	{
		std::cout << "Please enter your phone number." << std::endl;
		std::getline (std::cin, _data[3]);
	}
	while (_data[4] == "" && !std::cin.eof()) 
	{
		std::cout << "Please enter your darkest secret." << std::endl;
		std::getline (std::cin, _data[4]);
	}
}

void	Contact::display()
{
	std::cout << "Last name : " << _data[0] << std::endl;
	std::cout << "First name : " << _data[1] << std::endl;
	std::cout << "Nick name : " << _data[2] << std::endl;
	std::cout << "Phone number : " << _data[3] << std::endl;
	std::cout << "Dearkest Secret: " << _data[4] << std::endl;
}

std::string	Contact::get_member(int i)
{
	return (_data[i]);
}
