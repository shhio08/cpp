#include "../inc/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog : default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& other)
{
	std::cout << "Dog : copy constructor called" << std::endl;
	this->type = other.getType();
	this->brain = new Brain(*(other.getBrain()));
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog : assignation operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
		delete this->brain;
		this->brain = new Brain(*other.getBrain());
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog : destructor called" << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog : Woof Woof!" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}

std::string Dog::getIdea(int index) const
{
	return this->brain->getIdea(index);
}

void Dog::setIdea(const std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}