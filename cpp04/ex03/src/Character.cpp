#include "../inc/Character.hpp"

Character::Character() : name("default")
{
	std::cout << "Character : default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const std::string & name) : name(name)
{
	std::cout << "Character : name constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(const Character& other)
{
	std::cout << "Character : copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	*this = other;
}

Character& Character::operator=(const Character& other)
{
	std::cout << "Character : assignation operator called" << std::endl;
	if (this != &other)
	{
		this->name = other.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character : destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
		{
			std::cout << "[ " << i << " ] :";
			delete this->inventory[i];
		}
	}
}

std::string const &	Character::getName() const
{
	return this->name;
};

void Character::equip(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !this->inventory[idx])
		return;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !this->inventory[idx])
		return;
	this->inventory[idx]->use(target);
}