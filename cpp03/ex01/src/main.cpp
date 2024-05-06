#include "../inc/ScavTrap.hpp"

int	main()
{
	ScavTrap aa;
	std::cout << aa.getName() << std::endl;
	ScavTrap RED("RED");
	ScavTrap BLUE("BLUE");
	ScavTrap GREEN("GREEN");
	ScavTrap DEMON("DEMON");
	RED.attack("DEMON");
	DEMON.takeDamage(10);
	RED.beRepaired(10);
	GREEN.attack("DEMON");
	DEMON.takeDamage(10);
	GREEN.beRepaired(100);
	RED.guardGate();
	BLUE.guardGate();
	GREEN.guardGate();
	DEMON.guardGate();
	return 0;
}