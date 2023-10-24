#include "./HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &type ): _name(name), _type(type){

}

std::string HumanA::getName(void){
	
	return (this->_name); 
}


void HumanA::setName(std::string name){
	
	this->_name = name;
}



HumanA::~HumanA(){

}

void	HumanA::attack ( void ){

	std::cout << this->_name << " attacks with their ";
	std::cout << this->_type.getType() << std::endl;
}