#include "Personnage.hpp" 
#include "Arme.hpp"
#include <iostream>

using namespace std;

int main()
{
    Personnage david, goliath;
    Arme epee;
    Arme hache("hache", 43);

    goliath.attaquer(david);
    david.boirePotionDeVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache", 40);
    david.etatPersonnage();
    goliath.attaquer(david);
    goliath.attaquer(david);
    goliath.attaquer(david);
    david.etatPersonnage();
    hache.afficher();
    epee.afficher();
    return 0;
}