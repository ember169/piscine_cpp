/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:04:14 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/11 18:05:48 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

Phonebook::Phonebook() : _count(0), _oldest(0)
{
	return ;
}
Phonebook::~Phonebook()
{
	return ;
}

void Phonebook::addContact(
	const std::string	&firstName,
	const std::string	&lastName,
	const std::string	&nickName,
	const std::string	&phoneNumber,
	const std::string	&darkestSecret
)
{
	_contacts[_oldest] = Contact(
		firstName, lastName, nickName, phoneNumber, darkestSecret
	);
	if (_count < 8)
		_count++;
	_oldest = (_oldest + 1) % 8;
}

void Phonebook::displayTable() const
{
	for (int i = 0; i < _count; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << _contacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << _contacts[i].getLastName() << "|";
		std::cout << std::setw(10) << _contacts[i].getNickName() << "|";
		std::cout << std::endl;
	}
}

bool Phonebook::displayContact(int index) const
{
	if (index < 0 || index > 8)
		return (false);
	std::cout << _contacts[index].getFirstName << std::endl;
	std::cout << _contacts[index].getLastName << std::endl;
	std::cout << _contacts[index].getNickName << std::endl;
	std::cout << _contacts[index].getPhoneNumber << std::endl;
	std::cout << _contacts[index].getDarkestSecret << std::endl;
	return (true);
}