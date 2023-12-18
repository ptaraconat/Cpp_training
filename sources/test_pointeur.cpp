#include <iostream>

using namespace std; 

int main(){
    int entier = 16;
    int *pointeur(0);

    pointeur = &entier; 

    cout << "l'adresse de entier est " << &entier << endl;
    cout << "la valeur de pointeur est " << pointeur << endl ;

    cout << "la valeur pointée par pointeur est " << *pointeur << endl ; 
    cout << "la valeur attendue est c'elle de la variable entier :" << entier << endl;
    
    return 0;
}