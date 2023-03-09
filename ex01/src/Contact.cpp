/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:34:50 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/09 15:38:09 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	Contact::register();
{
	cout << "Please enter your last name." << endl;
	cin >> _data[0];
	cout << "Please enter your fisrt name." << endl;
	cin >> _data[1];
	cout << "Please enter your nickname." << endl;
	cin >> _data[2];
	cout << "Please enter your phone number." << endl;
	cin >> _data[3];
	cout << "Please enter your darkest secret." << endl;
	cin >> _data[4];
}

void	Contact::display()
{
	cout << "Last name : " << _data[0] << endl;
	cout << "First name : " << _data[1] << endl;
	cout << "Nick name : " << _data[2] << endl;
	cout << "Phone number : " << _data[3] << endl;
	cout << "Dearkest Secret: " << _data[4] << endl;
}

string	get_member(int i)
{
	return (_data[i]);
}
