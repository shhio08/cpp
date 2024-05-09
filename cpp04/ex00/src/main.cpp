#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
std::cout << "------\n";
const Animal* j = new Dog();
std::cout << "------\n";
const Animal* i = new Cat();
std::cout << "------\n";
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << "------\n";
delete meta;
delete j;
delete i;
std::cout << "------\n";

const WrongAnimal* meta2 = new WrongAnimal();
std::cout << "------\n";
const WrongAnimal* j2 = new WrongCat();
std::cout << "------\n";
std::cout << j2->getType() << " " << std::endl;
meta2->makeSound();
j2->makeSound();
std::cout << "------\n";
delete meta2;
delete j2;
return 0;
}

// __attribute__((destructor)) static void destructor(void)
// {
// 	system("leaks -q animal");
// }