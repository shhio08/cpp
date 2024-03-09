#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon *weapon;

public:
	HumanB(std::string _name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};