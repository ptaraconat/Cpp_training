#include <iostream>
#include <string>

int main(){
    std::cout << "quel est votre nom ? " << std::endl;
    std::string monPrenom;
    std::getline(std::cin,monPrenom);
    std::cout << "mon prenom est " << monPrenom << std::endl;
    return 0;
}