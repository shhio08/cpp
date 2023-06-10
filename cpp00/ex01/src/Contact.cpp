/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:31:30 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/10 17:53:41 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_first_name(void)
{
	std::string input_str;
	std::cout << "first name >> ";
	std::cin >> input_str;
	_first_name = input_str;
}

void	Contact::set_last_name(void)
{
	std::string input_str;
	std::cout << "last name >> ";
	std::cin >> input_str;
	_last_name = input_str;
}

void	Contact::set_nickname(void)
{
	std::string input_str;
	std::cout << "nickname >> ";
	std::cin >> input_str;
	_nickname = input_str;
}

void	Contact::set_phone_number(void)
{
	std::string input_str;
	std::cout << "phone namber >> ";
	std::cin >> input_str;
	_phone_number = input_str;
}

std::string	Contact::get_first_name(void)
{
	return (_first_name);
}
