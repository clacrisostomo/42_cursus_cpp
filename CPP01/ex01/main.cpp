#include "./Zombie.hpp"

int main(void){
    Zombie *horde = zombieHorde(5,"clarivader");
    for (int i = 0; i < 5; i++)
        horde->announce();
    delete[] horde;
    return (0);
}