#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap : default constructor called" << std::endl;
	this->_name = "default";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "ClapTrap : name constructor called" << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap : copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap : assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other.getName();
		this->_hit_points = other.getHitpoints();
		this->_energy_points = other.getEnergyPoints();
		this->_attack_damage = other.getAttackDamage();
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap : destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points <= 0 || this->_energy_points <= 0)
	{
		std::cout << "ClapTrap : "<< this->_name << " cannot attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap : " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	if (this->_hit_points <= 0)
	{
		this->_hit_points = 0;
		this->_energy_points = 0;
		std::cout << "ClapTrap : " << this->_name << " is dead!" << std::endl;
	}
	else
		std::cout << "ClapTrap : " << this->_name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "ClapTrap : " << this->_name << " cannot be repaired!" << std::endl;
		return;
	}
	std::cout << "ClapTrap : " << this->_name << " is repaired for " << amount << " points!" << std::endl;
	this->_hit_points += amount;
	this->_energy_points -= 1;
}

int ClapTrap::getHitpoints() const
{
	return (this->_hit_points);
}

int ClapTrap::getEnergyPoints() const
{
	return (this->_energy_points);
}

int ClapTrap::getAttackDamage() const
{
	return (this->_attack_damage);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}