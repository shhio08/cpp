#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog : default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog : copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog : assignation operator called" << std::endl;
	if (this != &other)
		this->type = other.getType();
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog : destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog : Woof Woof!" << std::endl;
}