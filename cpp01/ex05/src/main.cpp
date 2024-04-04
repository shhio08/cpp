#include "Harl.hpp"

int main()
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("aa");
	harl.complain("");
	return (0);
}

// #include <stdlib.h>
// 	__attribute__((destructor)) static void destructor()
// {
//     system("leaks -q Harl");
// }