#pragma once

#include <iostream>
#include "AMateria.hpp"

class Cure: public AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
	~Cure();
	std::string getType() const;
	AMateria* clone() const;
	void use(ICharacter& target);
};