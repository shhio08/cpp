#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat : default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat : copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat : assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat : Meow Meow!" << std::endl;
}