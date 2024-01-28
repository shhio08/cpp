/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:06:08 by stakimot          #+#    #+#             */
/*   Updated: 2024/01/28 19:07:59 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	std::string	cmd;

	for (;;)
	{
		std::cout << "ADD, SEARCH and EXIT >> ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT" || cmd == "exit")
			return (0);
		else if (cmd == "ADD" || cmd == "add")
			phonebook.add_contact();
		else if (cmd == "SEARCH" || cmd == "search")
			phonebook.search_contact();
		else if (std::cin.eof())
		{
			// ctrl + D
			std::cin.clear();
			return (1);
		}
		else if (cmd.empty())
			std::cin.clear();
	}
}