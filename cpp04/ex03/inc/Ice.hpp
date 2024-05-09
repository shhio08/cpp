#pragma once

#include <iostream>
#include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	~Ice();
	std::string getType() const;
	AMateria* clone() const;
	void use(ICharacter& target);
};