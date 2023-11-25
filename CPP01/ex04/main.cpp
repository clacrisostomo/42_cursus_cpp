#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>

int main ( int argc, char **argv ){

    std::ifstream   from(argv[1]);
    std::string filename = argv[1];
    std::string  s1 = argv[2];
    std::string s2 = argv[3];
    std::ofstream to(filename.append(".replace"));
    std::ostringstream tmp;
    std::string tmp2;
    std::size_t found = 0;

    if (argc !=4)
        return (1);

    tmp << from.rdbuf();
    tmp2 = tmp.str();

    from.close();
    while ((found = tmp2.find(s1, found)) != std::string::npos)
    {
        tmp2.erase(found, s1.length());
        tmp2.insert(found, s2);
        found += s2.length();
    }
    
    to << tmp2;
    to.close();
}