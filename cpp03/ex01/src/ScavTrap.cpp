#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap : default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "ScavTrap : name constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap : copy constructor called" << std::endl;
	this->_name = other.getName();
	this->_hit_points = other.getHitpoints();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_damage = other.getAttackDamage();
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap : assignation operator called" << std::endl;
	if (this == &other)
		return *this;
	this->_name = other.getName();
	this->_hit_points = other.getHitpoints();
	this->_energy_points = other.getEnergyPoints();
	this->_attack_damage = other.getAttackDamage();
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap : destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap : " << this->_name << " has entered in Gate keeper mode" << std::endl;
}