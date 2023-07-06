#include "./Zombie.hpp"

Zombie::Zombie( std::string name){
    this->_name = name;
    return ;
}

Zombie::Zombie(){
    this->_name = "";
}

void Zombie::announce( void ){
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName( void ){
    return(_name);
}

void Zombie::setName( std::string name){
    _name = name;
}

Zombie::~Zombie(){
    std::cout << _name << " is dead!" << std::endl;
}