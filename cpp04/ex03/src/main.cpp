#include "../inc/IMateriaSource.hpp"
#include "../inc/MateriaSource.hpp"
#include "../inc/ICharacter.hpp"
#include "../inc/Character.hpp"
#include "../inc/AMateria.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
std::cout << "--------------------------\n";
src->learnMateria(new Ice());
std::cout << "--------------------------\n";
src->learnMateria(new Cure());
std::cout << "--------------------------\n";
ICharacter* me = new Character("me");
std::cout << "--------------------------\n";
AMateria* tmp;
std::cout << "--------------------------\n";
tmp = src->createMateria("ice");
std::cout << "--------------------------\n";
me->equip(tmp);
std::cout << "--------------------------\n";
tmp = src->createMateria("cure");
std::cout << "--------------------------\n";
me->equip(tmp);
std::cout << "--------------------------\n";
ICharacter* bob = new Character("bob");
std::cout << "--------------------------\n";
me->use(0, *bob);
std::cout << "--------------------------\n";
me->use(1, *bob);
std::cout << "--------------------------\n";
delete bob;
delete me;
delete src;
return 0;
}


__attribute__((destructor)) static void destructor(void)
{
	system("leaks -q Materia");
}