#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->_name = _name;
	this->weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << this->_name << " attacks with their hand" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}