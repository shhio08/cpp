/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:23:32 by stakimot          #+#    #+#             */
/*   Updated: 2024/03/09 18:54:59 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("aaa");
	if (zombie == NULL)
		return (1);
	zombie->announce();
	delete zombie;
	randomChump("bbb");
	return (0);
}

// #include <stdlib.h>
// attribute((destructor)) static void destructor(void) {
//     system("leaks -q zombie");
// }