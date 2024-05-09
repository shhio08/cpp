#include "../inc/AMateria.hpp"

AMateria::AMateria() : type("AMateria")
{
	std::cout << "AMateria : default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) : type(type)
{
	std::cout << "AMateria : type constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other)
{
	std::cout << "AMateria : copy constructor called" << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	std::cout << "AMateria : assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria : destructor called" << std::endl;
}

std::string const & AMateria::getType()
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria : use " << this->type << " Materia to " << target.getName() << std::endl;
}
