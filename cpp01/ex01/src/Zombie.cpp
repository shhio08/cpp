/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:22:17 by stakimot          #+#    #+#             */
/*   Updated: 2024/03/23 00:46:16 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default"){}

Zombie::~Zombie(){}

void	Zombie::announce()
{
	std::cout << _name << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}
