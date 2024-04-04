/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakimot <stakimot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:03:19 by stakimot          #+#    #+#             */
/*   Updated: 2024/03/05 23:09:24 by stakimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string);
	~Zombie();
	void announce();
	void set_name(std::string);
};

Zombie *zombieHorde(int N, std::string name);

#endif