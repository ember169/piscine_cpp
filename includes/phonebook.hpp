/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:04:01 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/12 16:22:33 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"
# include <string>
# include <iomanip>

class Phonebook {

	public:
		Phonebook();
		~Phonebook();

		void addContact(
			const std::string	firstName,
			const std::string	lastName,
			const std::string	nickName,
			const std::string	phoneNumber,
			const std::string	darkestSecret
		);
		bool searchContact() const;

	private:
		Contact _contacts[8];
		int _count;
		int _oldest;

		std::string truncate(const std::string &str) const;
		void displayTable() const;
		void displayContact(int index) const;
		bool isValidIndex(const std::string input) const;
};

#endif