/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:04:04 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/11 16:39:37 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/contact.hpp"

Contact::Contact()
{
	return ;
}

Contact::Contact(
	const std::string	&firstName,
	const std::string	&lastName,
	const std::string	&nickName,
	const std::string	&phoneNumber,
	const std::string	&darkestSecret
) : _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret)
{
	return ;
}

Contact::~Contact()
{
	return ;
}

const std::string &Contact::getFirstName() const
{
	return (_firstName);
}

const std::string &Contact::getLastName() const
{
	return (_lastName);
}

const std::string &Contact::getNickName() const
{
	return (_nickName);
}

const std::string &Contact::getPhoneNumber() const
{
	return (_phoneNumber);
}

const std::string &Contact::getDarkestSecret() const
{
	return (_darkestSecret);
}