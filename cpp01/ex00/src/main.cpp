/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:23:32 by stakimot          #+#    #+#             */
/*   Updated: 2023/06/20 20:09:35 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

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