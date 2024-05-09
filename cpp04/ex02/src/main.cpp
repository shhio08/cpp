#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main()
{
	// Animal* animal = new Animal();
	Dog* BigDog = new Dog();
	Animal *BigAnimal = new Dog();
	Dog SmallDog;
	delete BigDog;
	delete BigAnimal;

	std::cout << "----- create animals -----" << std::endl;
	Animal (*animals[4]);
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	std::cout << "----- makeSound -----" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
	}

	std::cout << "----- delete -----" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i];
	}

	std::cout << "----- deep copy cat-----" << std::endl;
	std::cout << "cat 作成" << std::endl;
	Cat cat;
	std::cout << std::endl;
	std::cout << "before cat brain idea : " << cat.getIdea(8) << std::endl;
	cat.setIdea("new idea", 8);
	std::cout << std::endl;
	std::cout << "after cat brain idea : " << cat.getIdea(8) << std::endl;
	std::cout << std::endl << "cat2 作成" << std::endl;
	Cat cat2;
	std::cout << std::endl;
	std::cout << "before cat2 brain idea : " << cat2.getIdea(8) << std::endl;
	std::cout << std::endl << "cat2 = catを実行" << std::endl;
	cat2 = cat;
	std::cout << std::endl;
	std::cout << "after cat2 brain idea : " << cat2.getIdea(8) << std::endl;
	std::cout << std::endl;

	std::cout << "----- deep copy dog-----" << std::endl;
	std::cout << "dog 作成" << std::endl;
	Dog dog;
	std::cout << std::endl;
	std::cout << "before dog brain idea : " << dog.getIdea(8) << std::endl;
	dog.setIdea("new idea", 8);
	std::cout << std::endl;
	std::cout << "after dog brain idea : " << dog.getIdea(8) << std::endl;
	std::cout << std::endl << "dog2 作成" << std::endl;
	Dog dog2;
	std::cout << std::endl;
	std::cout << "before dog2 brain idea : " << dog2.getIdea(8) << std::endl;
	std::cout << std::endl << "dog2 = dogを実行" << std::endl;
	dog2 = dog;
	std::cout << std::endl;
	std::cout << "after dog2 brain idea : " << dog2.getIdea(8) << std::endl;
	std::cout << std::endl;
}

__attribute__((destructor)) static void destructor(void)
{
	system("leaks -q animal");
}