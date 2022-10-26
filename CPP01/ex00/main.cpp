#include "./Zombie.hpp"

int main(void){
    Zombie *Z;

    Z = newZombie("Zumbido");
    Z->announce();
    randomChump("clarivader");
    delete Z;
    return (0);
}