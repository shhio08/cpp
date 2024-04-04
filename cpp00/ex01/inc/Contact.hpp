/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:39:52 by stakimot          #+#    #+#             */
/*   Updated: 2024/01/28 21:07:30 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	std::string test;
	void set_first_name();
	void set_last_name();
	void set_nickname();
	void set_phone_number();
	void set_darkest_secret();
	std::string	get_first_name();
	std::string	get_last_name();
	std::string	get_nickname();
	std::string	get_phone_number();
	std::string	get_darkest_secret();
};
