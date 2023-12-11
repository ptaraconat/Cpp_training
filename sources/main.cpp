#include <iostream>
// first C++ script 
using namespace std ; 

int main()
{
    int ageUtilisateur(16);
    int ageUtilisateur2 = ageUtilisateur;
    int& ageUtilisateur3 = ageUtilisateur ; 
    cout << "Hello world" << endl;
    cout << "this was my first c++ func" << endl;
    cout << "age utilisateur :" << ageUtilisateur << endl;
    cout << "age utilisateur 2 :" << ageUtilisateur2 << endl; 
    cout << "age utilisateur 3 :" << ageUtilisateur3 << endl;

    ageUtilisateur = 20 ; 

    cout << "age utilisateur :" << ageUtilisateur << endl;
    cout << "age utilisateur 2 :" << ageUtilisateur2 << endl; 
    cout << "age utilisateur 3 :" << ageUtilisateur3 << endl;


    return 0;
}