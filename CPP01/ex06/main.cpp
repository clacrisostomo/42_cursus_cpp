#include "Harl.hpp"

int main (int argc, char **argv){

	Harl	Karen;

	if (argc != 2){

		std::cout << "Please insert a level such as \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\"" << std::endl;
		return (1);
	}
	Karen.complain(argv[1]);
	return (0);
}