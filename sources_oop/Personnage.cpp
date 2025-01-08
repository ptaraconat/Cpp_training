#include "Personnage.hpp"
#include <string>
#include <iostream>

using namespace std; 

Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = "epee rouille";
    m_degatsArme = 10;
}

Personnage::Personnage(string nomArme, int degatsArme)
{
    m_vie = 100;
    m_mana = 100;
    m_nomArme = nomArme;
    m_degatsArme = degatsArme;
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
    cible.recevoirDegats(m_degatsArme);
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
    m_nomArme = nomNouvellArme;
    m_degatsArme = degatNouvelleArme;
}

bool Personnage::estVivant() const
{
    return m_vie > 0;
}

void Personnage::etatPersonnage() const 
{
    cout << "point de vie " << m_vie << endl; 
    if (this->estVivant())
    {
        cout << "Le personnage est vivant" << endl;
    }
    else 
    {
        cout << "Le personnage est mort" << endl;
    }
}