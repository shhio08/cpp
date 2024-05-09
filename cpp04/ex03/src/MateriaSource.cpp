#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource : default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	std::cout << "MateriaSource : copy constructor called" << std::endl;
	*this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	std::cout << "MateriaSource : assignation operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (materias[i])
				delete materias[i];
			materias[i] = other.materias[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource : destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (materias[i])
		{
			std::cout << "[ " << i << " ] :";
			delete materias[i];
		}
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!materias[i])
		{
			materias[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (materias[i] && materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return NULL;
}