#include <iostream>
#include <fstream>
#include <sstream>

int main ( int argc, char **argv ){

    std::ifstream   ifs("arquivo");
    std::string     s1;
    std::string     s2;

    ifs >> s1 >> s2;
}