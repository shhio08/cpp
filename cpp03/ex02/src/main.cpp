#include "../inc/FragTrap.hpp"

int	main()
{
	FragTrap ft("FragTrap");

	std::cout << ft.getName() << std::endl;
	std::cout << ft.getHitpoints() << std::endl;
	std::cout << ft.getEnergyPoints() << std::endl;
	std::cout << ft.getAttackDamage() << std::endl;
	ft.attack("target");
	ft.takeDamage(10);
	ft.beRepaired(15);
	std::cout << ft.getHitpoints() << std::endl;
	std::cout << ft.getEnergyPoints() << std::endl;
	std::cout << ft.getAttackDamage() << std::endl;
	ft.highFivesGuys();
	return 0;
}