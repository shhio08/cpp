#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal : default constructor called" << std::endl;
}

Animal::Animal(const std::string type) : type(type)
{
	std::cout << "Animal : type constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal : copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal : assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal : destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal : Sound!" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}