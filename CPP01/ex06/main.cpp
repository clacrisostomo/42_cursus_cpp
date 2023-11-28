#include "Harl.hpp"

int main (void){

	Harl	Karen;

	std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		std::cout << "Test " << i << std::endl;
		Karen.complain(complain[rand()%4]);
		std::cout << std::endl;
	}
	// Karen.complain(complain[rand()%4]);
	// Karen.complain(complain[rand()%4]);
	// Karen.complain(complain[rand()%4]);
	return (0);
}