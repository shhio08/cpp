#include "../inc/ClapTrap.hpp"

int	main()
{
	ClapTrap claptrap("Claptrap");
	ClapTrap claptrap2(claptrap);

	claptrap.attack("target");
	std::cout << claptrap.getEnergyPoints() << std::endl;
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	std::cout << claptrap.getHitpoints() << std::endl;
	std::cout << claptrap.getEnergyPoints() << std::endl;
	claptrap.attack("target");
	std::cout << claptrap.getEnergyPoints() << std::endl;
	claptrap.takeDamage(10);
	std::cout << claptrap.getEnergyPoints() << std::endl;
	claptrap.beRepaired(3);
	std::cout << claptrap.getHitpoints() << std::endl;
	std::cout << claptrap.getEnergyPoints() << std::endl;
	return (0);
}