#include "../inc/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat : default constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& other)
{
	std::cout << "Cat : copy constructor called" << std::endl;
	this->type = other.getType();
	this->brain = new Brain(*(other.getBrain()));
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat : assignation operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.getType();
		if (this->brain)
			delete this->brain;
		this->brain = new Brain(*other.getBrain());
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat : destructor called" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat : Meow Meow!" << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->brain;
}

std::string Cat::getIdea(int index) const
{
	return this->brain->getIdea(index);
}

void Cat::setIdea(const std::string idea, int index)
{
	this->brain->setIdea(idea, index);
}