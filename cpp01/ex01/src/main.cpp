/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 19:16:52 by stakimot          #+#    #+#             */
/*   Updated: 2024/03/09 16:46:04 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zonbie;
	zonbie = zombieHorde(5, "test");
	for (int i = 0; i < 5; i++)
		zonbie[i].announce();
	delete[] zonbie;
	return (0);
}

// #include <stdlib.h>
// 	__attribute__((destructor)) static void destructor()
// {
//     system("leaks -q zombie");
// }