#include <iostream>
using namespace std;

int ajouteDeux(int nombreRecu)
{
	int valeur = nombreRecu + 2;
	return valeur;
}

double carre(double x){
    return x*x;
}

void carre_2(double x){
    x = x*x;
}

void carre_3(double& x){
    x = x*x;
}

int main(int argc, const char * argv[])
{
	int a = 2;
	int b = 2;
	cout << a << endl;
	cout << b << endl;
	b = ajouteDeux(a);
	cout << b << endl;
    double c = 4;
    cout << carre(c) << endl;
    carre_2(c);
    cout << c << endl;
    carre_3(c);
    cout << c << endl;
}