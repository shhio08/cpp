/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:36:17 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/10 21:02:52 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class	PhoneBook
{
private:
	int		contact_index;
	Contact contact[8];
public:
	void	add_contact();
	void	search_contact();
	void	put_all_contact();
	void	put_name(std::string str);
	void	put_select_idx_contact(int select_idx);
};

#endif