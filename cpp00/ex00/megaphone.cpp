/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:41:13 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/07 16:47:30 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	put_error(void)
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return ;
}

void	put_upper_char(char *str)
{
	for (int i = 0; str[i]; i++)
		std::cout << (char)toupper(str[i]);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		put_error();
		return (1);
	}
	for (int i = 1; argv[i]; i++)
		put_upper_char(argv[i]);
	std::cout << std::endl;
	return (0);
}