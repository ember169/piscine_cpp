/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:04:01 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/11 17:59:25 by lgervet          ###   ########.fr       */
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
		void searchContact() const;

	private:
		Contact _contacts[8];
		int _count;
		int _oldest;

		void displayTable() const;
		bool displayContact(int index) const;
};

#endif