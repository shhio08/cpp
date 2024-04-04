#pragma once

#include <iostream>
#include <stdio.h>

class Harl
{
private:
	void debug();
	void info();
	void warning();
	void error();

public:
	Harl();
	~Harl();
	void complain(std::string level);
};