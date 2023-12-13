#include <iostream>
#include <vector>

using namespace std ; 

double moyenne(vector<int> tableau){
    int tableSize = tableau.size();
    double moyenne = 0;
    for (int i(0); i < tableSize; ++i){
        moyenne += tableau[i];
    }
    moyenne /= tableSize;
}

int main(){
    int n = 5;
    vector<int> tableau(n,0);
    for (int i(0); i < n; ++i){
        tableau[i] = i*i;
    }
    cout << moyenne(tableau) << endl;
    return 0;
}