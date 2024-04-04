/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 17:25:53 by stakimot          #+#    #+#             */
/*   Updated: 2024/03/09 18:55:08 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default"){}

Zombie::Zombie(std::string name) : _name(name){}

Zombie::~Zombie(){}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}