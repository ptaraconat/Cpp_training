#include <iostream>
using namespace std ;

int main(){
    int number = 0;
    while (number < 10){
        cout << number << endl;
        number ++;
    }
    number = 0;
    do {
        cout << number << endl;
        number++;
    }while (number < 10);

    cout << "for loop" << endl;
    for (number = 0; number < 10; number ++){
        cout << number << endl;
    }
}