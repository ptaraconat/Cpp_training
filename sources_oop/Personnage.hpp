#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include "Arme.hpp"

class Personnage
{
public:
    Personnage();
    Personnage(std::string nomArme, int degatsArme);
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const;
    void etatPersonnage() const;

private:
    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif