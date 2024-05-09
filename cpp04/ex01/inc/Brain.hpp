# pragma once

#include <iostream>
#include "Animal.hpp"

class Brain
{
private:
	std::string *ideas;
public:
	Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	~Brain();
	void setIdea(const std::string& idea, int index);
	std::string getIdea(int index) const;
	std::string* getIdeas() const;
};