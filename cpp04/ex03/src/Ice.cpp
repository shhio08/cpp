#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice : default constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice : copy constructor called" << std::endl;
	*this = other;
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "Ice : assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice : destructor called" << std::endl;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

std::string Ice::getType() const
{
	return this->type;
}