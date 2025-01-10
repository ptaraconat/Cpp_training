#include "Personnage.hpp"
#include <string>
#include <iostream>

using namespace std; 

Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_arme = Arme("Eppee rouille", 10);
}

Personnage::Personnage(string nomArme, int degatsArme)
{
    m_vie = 100;
    m_mana = 100;
    m_arme = Arme(nomArme, degatsArme);
}

Personnage::~Personnage()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer à quoi cela ressemble.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. */
}

void Personnage::recevoirDegats(int nbDegat)
{
    m_vie -= nbDegat;
    if (m_vie < 0)
    {
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible)
{
    cible.recevoirDegats(m_arme.getDegat());
}

void Personnage::boirePotionDeVie(int quantitePotion)
{
    m_vie += quantitePotion;
    if (m_vie > 100)
    {
        m_vie = 100;
    }
}

void Personnage::changerArme(string nomNouvellArme, int degatNouvelleArme)
{
    m_arme = Arme(nomNouvellArme, degatNouvelleArme);
}

bool Personnage::estVivant() const
{
    return m_vie > 0;
}

void Personnage::etatPersonnage() const 
{
    cout << "point de mana" << m_mana << endl;
    cout << "point de vie " << m_vie << endl; 
    if (this->estVivant())
    {
        cout << "Le personnage est vivant" << endl;
    }
    else 
    {
        cout << "Le personnage est mort" << endl;
    }
    m_arme.afficher();
}