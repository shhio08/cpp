#pragma once

#include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string);
	~Weapon();
	const std::string &getType()const;
	void setType(std::string type);
};