/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:54:55 by stakimot          #+#    #+#             */
/*   Updated: 2023/07/16 19:05:11 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	try
	{
		zombie = new Zombie();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	zombie->set_name(name);
	return (zombie);
}