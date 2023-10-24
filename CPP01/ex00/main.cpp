#include "./Zombie.hpp"

int main(void){
    Zombie *Z;

    Z = newZombie("Zombie");
    Z->announce();
    randomChump("Random Zombie");
    delete Z;
    return (0);
}