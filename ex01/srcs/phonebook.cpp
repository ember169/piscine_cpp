/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:04:14 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/12 16:24:49 by lgervet          ###   ########.fr       */
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

bool Phonebook::askField(const std::string &label, std::string &out)
{
	while (1)
	{
		std::cout << label << ": " << std::flush;
		if (!std::getline(std::cin, out))
			return (false);
		if (!out.empty())
			return (true);
		std::cout << "This field cannot be empty." << std::endl;	
	}
}

bool Phonebook::askContactInfo()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	if (!askField("First name", firstName))
		return (false);
	if (!askField("Last name", lastName))
		return (false);
	if (!askField("Nickname", nickName))
		return (false);
	if (!askField("Phone number", phoneNumber))
		return (false);
	if (!askField("Darkest secret", darkestSecret))
		return (false);
	addContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	return (true);
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

std::string Phonebook::truncate(const std::string &str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void Phonebook::displayTable() const
{
	std::cout << "|" << std::setw(10) << "index"
			<< "|" << std::setw(10) << "first name"
			<< "|" << std::setw(10) << "last name"
			<< "|" << std::setw(10) << "nickname"
			<< "|" << std::endl;
 
	for (int i = 0; i < _count; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << truncate(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << truncate(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << truncate(_contacts[i].getNickName()) << "|";
		std::cout << std::endl;
	}
}

void Phonebook::displayContact(int index) const
{
	if (index < 0 || index > _count)
		return ;
	std::cout << "First name    : " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last name     : " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname      : " << _contacts[index].getNickName() << std::endl;
	std::cout << "Phone number  : " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

bool Phonebook::isValidIndex(const std::string &input) const
{
	if (input.empty())
		return (false);
	for (std::string::size_type i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(input[i])))
			return (false);
	}
	int index = std::atoi(input.c_str());
	return (index >= 0 && index < _count);
}

bool Phonebook::searchContact() const
{
	std::string	input;

	displayTable();
	std::cout << "Get information from Contact index number " << std::flush;
	if (!std::getline(std::cin, input))
		return (false);
	if (!isValidIndex(input))
	{
		std::cout << "Wrong index. Please try again." << std::endl;
		return (true);
	}
	int index = std::atoi(input.c_str());
	displayContact(index);
	return (true);
}