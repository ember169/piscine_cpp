/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgervet <42@leogervet.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:04:08 by lgervet           #+#    #+#             */
/*   Updated: 2026/08/12 14:53:31 by lgervet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/phonebook.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	prompt;
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	while (1)
	{
		std::cout << "Simple Phonebook > " << std::endl;
		std::getline(std::cin, prompt);

		if (prompt.compare("EXIT"))
			break ;
		else if (prompt.compare("ADD"))
		{
			
		}
		else if (prompt.compare("SEARCH"))
		{
	
		}
		else
			std::cout << "Error: wrong input." << std::endl << std::cout "Please use \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
	}
}