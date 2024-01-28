/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:41:13 by stakimot          #+#    #+#             */
/*   Updated: 2024/01/28 17:21:41 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	put_error(std::string str)
{
	std::cout << str << std::endl;
	return ;
}

void	put_upper_char(char *str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)std::toupper(str[i]);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		put_error("* LOUD AND UNBEARABLE FEEDBACK NOISE *");
		return (1);
	}
	if (argc != 2)
	{
		put_error("DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.");
		return (1);
	}
	put_upper_char(argv[1]);
	std::cout << std::endl;
	return (0);
}