#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap : default constructor called" << std::endl;
	this->_name = "default";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "FragTrap : name constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap : copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap : assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_name = other.getName();
	this->_hit_points = other.getHitpoints();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_damage = other.getAttackDamage();
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap : destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap : " << this->_name << " is asking for a high five!" << std::endl;
}