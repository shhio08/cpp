#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	~Cat();
	void makeSound() const;
	Brain* getBrain() const;
	std::string getIdea(int index) const;
	void setIdea(const std::string idea, int index);
};