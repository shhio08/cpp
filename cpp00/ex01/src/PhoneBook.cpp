/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:23:37 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/10 21:07:12 by stakimot         ###   ########.fr       */
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
	contact[idx].set_darkest_secret();
	contact_index = (idx + 1) % 8;
}

void	PhoneBook::put_name(std::string str)
{
	if (str.size() > 10)
	{
		std::cout << std::setw(11) << str.substr(0, 9) << ".|";
		return ;
	}
	std::cout << std::setw(11) << str << " |";
}

void	PhoneBook::put_all_contact(void)
{
	std::cout << std::endl << "index | first name |  last name |   nickname |" << std::endl;
	for (int idx = 0; idx < 8; idx++)
	{
		std::cout << std::setw(5) << idx << " |";
		put_name(contact[idx].get_first_name());
		put_name(contact[idx].get_last_name());
		put_name(contact[idx].get_nickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::put_select_idx_contact(int select_idx)
{
	std::cout << std::setw(17) << "first name : " << contact[select_idx].get_first_name() << std::endl;
	std::cout << std::setw(17) << "last name : " << contact[select_idx].get_last_name() << std::endl;
	std::cout << std::setw(17) << "nickname : " << contact[select_idx].get_nickname() << std::endl;
	std::cout << std::setw(17) << "phone number : " << contact[select_idx].get_phone_number() << std::endl;
	std::cout << std::setw(17) << "darkest secret : " << contact[select_idx].get_darkest_secret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::search_contact(void)
{
	std::string	select_idx;
	put_all_contact();
	std::cout << "search index >> ";
	std::cin >> select_idx;
	std::cout << std::endl;
	if (select_idx == "0")
		put_select_idx_contact(0);
	else if (select_idx == "1")
		put_select_idx_contact(1);
	else if (select_idx == "2")
		put_select_idx_contact(2);
	else if (select_idx == "3")
		put_select_idx_contact(3);
	else if (select_idx == "4")
		put_select_idx_contact(4);
	else if (select_idx == "5")
		put_select_idx_contact(5);
	else if (select_idx == "6")
		put_select_idx_contact(6);
	else if (select_idx == "7")
		put_select_idx_contact(7);
	else
		std::cout << "not index" << std::endl;
}