/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:06:08 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/10 20:36:05 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;

	for (;;)
	{
		std::cout << "ADD, SEARCH and EXIT >> ";
		std::cin >> input;
		if (input == "EXIT" || std::cin.eof())
			return (0);
		if (input == "ADD")
			phonebook.add_contact();
		if (input == "SEARCH")
			phonebook.search_contact();
	}
}