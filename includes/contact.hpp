/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:03:58 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/11 16:08:29 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <std> 

#pragma once
#ifndef CONTACT_H
# define CONTACT_H

class Contact {
	public:
		Contact();
		Contact(
			const std::string	&_firstName,
			const std::string	&_lastName,
			const std::string	&_nickName,
			const std::string	&_phoneNumber,
			const std::string	&_darkestSecret
		);
		~Contact();

		

	private:
		const std::string	_firstName;
		const std::string	_lastName;
		const std::string	_nickName;
		const std::string	_phoneNumber;
		const std::string	_darkestSecret;
};

#endif