#include "./Zombie.hpp"

int main(void){
    Zombie *horde = zombieHorde(40,"clarivader");
    for (int i = 0; i < 40; i++)
    {
        std::cout << "[Zombie " << i + 1 << "] ";
        horde->announce();
    }
    delete[] horde;
    return (0);
}