#pragma once

#include <iostream>
#include "ICharacter.hpp"



class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& other);
	AMateria& operator=(const AMateria& other);
	virtual ~AMateria();

	std::string const & getType(); //Returns the materia type
	virtual AMateria* clone() const = 0; //純粋仮想関数
	virtual void use(ICharacter& target);
};