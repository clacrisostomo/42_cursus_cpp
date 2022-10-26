#include "./Zombie.hpp"

int main(void){
    Zombie *horde = zombieHorde(5,"clarivader");
    delete[] horde;
    return (0);
}