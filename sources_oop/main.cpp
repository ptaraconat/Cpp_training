#include "Personnage.hpp" 
#include <iostream>

using namespace std;

int main()
{
    Personnage david, goliath;

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache", 40);
    david.etatPersonnage();
    goliath.attaquer(david);
    david.etatPersonnage();
    goliath.attaquer(david);
    david.etatPersonnage();
    goliath.attaquer(david);
    david.etatPersonnage();
    cout << "hello" << endl;
    return 0;
}