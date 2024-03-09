#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &weapon):_name(_name), weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->weapon.getType() << std::endl;
}