/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:03:58 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/11 16:33:45 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	public:
		Contact();
		Contact(
			const std::string	&firstName,
			const std::string	&lastName,
			const std::string	&nickName,
			const std::string	&phoneNumber,
			const std::string	&darkestSecret
		);
		~Contact();

		const std::string &getFirstName() const;
		const std::string &getLastName() const;
		const std::string &getNickName() const;
		const std::string &getPhoneNumber() const;
		const std::string &getDarkestSecret() const;

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif