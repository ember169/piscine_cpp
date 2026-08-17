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

	
	while (1)
	{
		std::cout << "Simple Phonebook > " << std::flush;
		if (!std::getline(std::cin, prompt))
			break;
		if (prompt == "EXIT")
			break ;
		else if (prompt == "ADD")
		{
			if (!phonebook.askContactInfo())
				break;
		}
		else if (prompt == "SEARCH")
		{
			if (!phonebook.searchContact())
				break;
		}
		else
			std::cout << "Error: wrong input. Please use \"ADD\", \"SEARCH\" or \"EXIT\"." << std::endl;
	}
	std::cout << "..." << std::endl;
	return (0);
}