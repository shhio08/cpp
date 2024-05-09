#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain : default constructor called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Brain idea";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain : copy constructor called" << std::endl;
	std::string* other_ideas = other.getIdeas();
	this->ideas = new std::string[100];
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = other_ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain : assignation operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			std::cout << "!!!!!!!!!" << std::endl;
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	delete[] this->ideas;
	std::cout << "Brain : destructor called" << std::endl;
}

void Brain::setIdea(const std::string& idea, int index)
{
	this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return this->ideas[index];
}

std::string* Brain::getIdeas() const
{
	return this->ideas;
}