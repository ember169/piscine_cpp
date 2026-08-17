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
# include <ostream>
# include <iostream>
# include <cstdlib>

class Phonebook {

	public:
		Phonebook();
		~Phonebook();

		bool askContactInfo();
		bool searchContact() const;

	private:
		Contact _contacts[8];
		int _count;
		int _oldest;

		void addContact(
			const std::string	&firstName,
			const std::string	&lastName,
			const std::string	&nickName,
			const std::string	&phoneNumber,
			const std::string	&darkestSecret
		);
		bool askField(const std::string &label, std::string &out);
		void displayTable() const;
		void displayContact(int index) const;
		bool isValidIndex(const std::string &input) const;
		std::string truncate(const std::string &str) const;
};

#endif