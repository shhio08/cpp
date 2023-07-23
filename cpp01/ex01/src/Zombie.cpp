/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:22:17 by stakimot          #+#    #+#             */
/*   Updated: 2023/07/16 19:04:02 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	
}

void	Zombie::announce()
{
	std::cout << _name;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}