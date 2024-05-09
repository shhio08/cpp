#include "../inc/FragTrap.hpp"

int	main()
{
	FragTrap ft("FragTrap");
	FragTrap ft2(ft);

	std::cout << "ft1 name : " << ft.getName() << std::endl;
	std::cout << "ft2 name : " << ft2.getName() << std::endl;
	std::cout << ft.getHitpoints() << std::endl;
	std::cout << ft.getEnergyPoints() << std::endl;
	std::cout << ft.getAttackDamage() << std::endl;
	ft.attack("target");
	ft.takeDamage(20);
	ft.beRepaired(15);
	std::cout << ft.getHitpoints() << std::endl;
	std::cout << ft.getEnergyPoints() << std::endl;
	std::cout << ft.getAttackDamage() << std::endl;
	ft.highFivesGuys();
	return 0;
}