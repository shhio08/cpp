/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:31:30 by stakimot          #+#    #+#             */
/*   Updated: 2024/01/28 19:39:33 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

void Contact::set_first_name(void)
{
	std::string input_str;
	std::cout << "first name >> ";
	std::getline(std::cin, input_str);
	if (std::cin.eof())
	{
		// ctrl + D
		exit(1);
	}
	if (input_str.empty())
	{
		std::cin.clear();
		set_first_name();
		return ;
	}
	_first_name = input_str;
}

void Contact::set_last_name(void)
{
	std::string input_str;
	std::cout << "last name >> ";
	std::getline(std::cin, input_str);
	if (std::cin.eof())
	{
		// ctrl + D
		exit(1);
	}
	if (input_str.empty())
	{
		std::cin.clear();
		set_last_name();
		return ;
	}
	_last_name = input_str;
}

void Contact::set_nickname(void)
{
	std::string input_str;
	std::cout << "nickname >> ";
	std::getline(std::cin, input_str);
	if (std::cin.eof())
	{
		// ctrl + D
		exit(1);
	}
	if (input_str.empty())
	{
		std::cin.clear();
		set_nickname();
		return ;
	}
	_nickname = input_str;
}

void Contact::set_phone_number(void)
{
	std::string input_str;
	std::cout << "phone namber >> ";
	std::getline(std::cin, input_str);
	if (std::cin.eof())
	{
		// ctrl + D
		exit(1);
	}
	if (input_str.empty())
	{
		std::cin.clear();
		set_phone_number();
		return ;
	}
	_phone_number = input_str;
}

void Contact::set_darkest_secret(void)
{
	std::cout << "darkest_secret >> ";
	std::string input_str;
	std::getline(std::cin, input_str);
	if (std::cin.eof())
	{
		// ctrl + D
		exit(1);
	}
	if (input_str.empty())
	{
		std::cin.clear();
		set_darkest_secret();
		return ;
	}
	_darkest_secret = input_str;
}

std::string Contact::get_first_name(void)
{
	return (_first_name);
}

std::string Contact::get_last_name(void)
{
	return (_last_name);
}

std::string Contact::get_nickname(void)
{
	return (_nickname);
}

std::string Contact::get_phone_number(void)
{
	return (_phone_number);
}

std::string Contact::get_darkest_secret(void)
{
	return (_darkest_secret);
}