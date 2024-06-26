#pragma once

#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hit_points;
	int _energy_points;
	int _attack_damage;
public:
	ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int getHitpoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	std::string getName() const;
};