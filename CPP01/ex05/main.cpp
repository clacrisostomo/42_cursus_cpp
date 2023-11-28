#include "Harl.hpp"

int main (void){

	Harl	Karen;

	std::string complain[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	srand(time(NULL));

	Karen.complain(complain[rand()%4]);
	Karen.complain(complain[rand()%4]);
	Karen.complain(complain[rand()%4]);
	Karen.complain(complain[rand()%4]);
	return (0);
}