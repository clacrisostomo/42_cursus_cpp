#include "./Zombie.hpp"

int main(void){
    
    Zombie *horde = zombieHorde(20,"clarivader");
    for (int i = 0; i < 20; i++)
    {
        std::cout << "[Zombie " << i + 1 << "] ";
        horde->announce();
    }
    delete [] horde;
    return (0);
}