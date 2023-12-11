#include <iostream>
using namespace std;
int main(){
    bool bool_tmp;
    bool_tmp = (1==2);
	cout << bool_tmp << endl;
    int nombreAnimaux = 2;
    if (nombreAnimaux >= 3){
        cout << "il y a beacoup d'animaux" << endl;
    }
    else {
        cout << " dommage il y a pas beaucoup d'animaux" << endl;
    }

    int nb = 3;
    if (nb < 1){
        cout << " nb inférieur à 1" << endl;
    }
    else if (nb == 1){
        cout << "nb = 1" << endl ; 
    }
    else if (nb == 2){
        cout << "nb == 2" << endl;
    }
    else {
        cout << "nb supérieur à 2" << endl;
    }

    int nb2 = 2;
    switch(nb2){
        case 0 :
            cout << "nb = 0" << endl;
            break;
        case 1 : 
            cout << "nb = 1" << endl;
            break;
        case 2 : 
            cout << "nb = 2" << endl;
            break;
        default :
            cout << "default response" << endl;
            break;

    }


	return 0;
}