#include "file.hpp"

void read_file(char **argv)
{
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	std::ifstream input_file(filename);
	if (!input_file.is_open())
	{
		std::cerr << "Failed to open input file: " << filename << std::endl;
		return;
	}

	std::ofstream output_file(filename + ".replace");
	if (!output_file.is_open())
	{
		std::cerr << "Failed to create output file: " << filename << std::endl;
		return;
	}

	while (std::getline(input_file, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		output_file << line << std::endl;
	}
	input_file.close();
	output_file.close();
	return ;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	read_file(argv);
	return (0);
}

// #include <stdlib.h>
// 	__attribute__((destructor)) static void destructor()
// {
//     system("leaks -q ex04");
// }