#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{

    private:

            std::string _name;

    public:
            
            Zombie(std::string name);
            Zombie();
            ~Zombie();

            std::string getName ( void );
            void setName ( std::string name );
            void announce( void );
};

Zombie* newZombie ( std::string name );
Zombie* zombieHorde(int n, std::string name);

#endif