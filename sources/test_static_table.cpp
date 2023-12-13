#include <iostream>

using namespace std ; 

double moyenne(int tableau[], int tailleTableau){
    double moyenne = 0 ;
    for (int i(0); i < tailleTableau; i++){
        moyenne += tableau[i];
    }
    moyenne /=tailleTableau;
    return moyenne;
}

int main(){
    int n = 5;
    int tableau[n];
    for (int i(0); i < n; i++){
        tableau[i] = i*i;
    }
    for (int i(0); i< n; i++){
        cout << tableau[i] << endl;
    }
    cout << moyenne(tableau, n) << endl;
}