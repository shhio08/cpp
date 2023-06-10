/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:23:37 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/10 18:06:57 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"



void	PhoneBook::add_contact(void)
{
	int	idx;

	idx = contact_index;
	contact[idx].set_first_name();
	contact[idx].set_last_name();
	contact[idx].set_nickname();
	contact[idx].set_phone_number();
	contact_index = (idx + 1) % 8;
}

void	PhoneBook::put_name(int idx)
{
	std::string	str = contact[idx].get_first_name();
	if (contact[idx].get_first_name().size() > 10)
	{
		std::cout << std::setw(10) << str.substr(0, 9) << ".|";
		return ;
	}
	std::cout << std::setw(10) << str << " |";
}

void	PhoneBook::put_all_contact(void)
{
	std::cout << std::endl << "index | first name | last name | nickname" << std::endl;
	for (int idx = 0; idx < 8; idx++)
	{
		std::cout << std::setw(5) << idx << " |";
		put_name(idx);
	}
}

void	PhoneBook::search_contact(void)
{
	put_all_contact();
	
}