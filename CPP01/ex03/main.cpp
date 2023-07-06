#include "./Weapon.hpp"

int main (void){

	std::string type = "ax";

	Weapon one;

	one.setType(type);

	std::cout << one.getType() << std::endl;



}
