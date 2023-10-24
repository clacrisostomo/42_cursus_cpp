#include "./HumanB.hpp"

HumanB::HumanB( std::string name ): _name(name){

    this->_name = name;
    this->_type = NULL;
}

HumanB::~HumanB(){

}

void    HumanB::setWeapon( Weapon &type){

    this->_type = &type;
}

void	HumanB::attack ( void ){

	std::cout << this->_name << " attacks with their ";
    if (this->_type)
	    std::cout << this->_type->getType() << std::endl;
    else
        std::cout << "bare hands" << std::endl;
}