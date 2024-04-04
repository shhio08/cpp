#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
		return (1);

	harl.complain(argv[1]);
	return (0);
}

// #include <stdlib.h>
// 	__attribute__((destructor)) static void destructor()
// {
//     system("leaks -q Harl");
// }