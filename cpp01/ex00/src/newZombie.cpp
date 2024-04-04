/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:04:59 by stakimot          #+#    #+#             */
/*   Updated: 2024/03/09 18:55:03 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*zombie;

	try
	{
		zombie = new Zombie();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (NULL);
	}
	zombie->set_name(name);
	return (zombie);
}

void randomChump(std::string name)
{
	Zombie	zombie;

	zombie.set_name(name);
	zombie.announce();
}
