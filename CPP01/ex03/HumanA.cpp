#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon *type):_name(name), _type(type){
	
	std::cout << name << std::endl;
	std::cout << *type.getType << std::endl;  
	return ;
}

std::string HumanA::getName(void){
	
	return (this->_name); 
}


void HumanA::setName(std::string name){
	
	this->_name = name;
}



HumanA::~HumanA(){

}

void	attack ( void ){

	std::cout << this->_name << "attacks with their";
	std::cout << this->_type.getType << std::endl;
}