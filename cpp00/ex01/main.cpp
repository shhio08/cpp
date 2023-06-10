/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:06:08 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/09 15:22:22 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::string	input;
	// for (;;)
	// {
		std::cout << "ADD, SEARCH and EXIT";
		std::cin >> input;
		if (input == "EXIT")
			return (0);
		if (input == "ADD")
			PhoneBook.add_contact();
		
	// }
}