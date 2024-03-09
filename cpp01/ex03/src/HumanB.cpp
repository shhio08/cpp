#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->_name = _name;
	this->weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}