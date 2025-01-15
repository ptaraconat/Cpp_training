#include "Duree.hpp"
#include <iostream>

using namespace std;

Duree::Duree(int heures , int minutes , int secondes )
{
    m_heures = heures;
    m_minutes = minutes;
    m_secondes = secondes;
}

bool Duree::estEgal(Duree const& duree) const
{
    return (m_heures == duree.m_heures && m_minutes == duree.m_minutes && m_secondes == duree.m_secondes);
}

bool operator==(Duree const& duree1, Duree const& duree2)
{
    return duree1.estEgal(duree2);
}

bool Duree::estPlusPetitQue(Duree const& duree) const
{
    if (m_heures < duree.m_heures)
    {
        return true;
    }
    else if (m_heures == duree.m_heures && m_minutes < duree.m_minutes)
    {
        return true;
    }
    else if (m_heures == duree.m_heures && m_minutes == duree.m_minutes && m_secondes < duree.m_minutes)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

bool operator<(Duree const& duree1, Duree const& duree2)
{
    return duree1.estPlusPetitQue(duree2);
}

Duree&  Duree::operator+=(Duree const& duree)
{
    m_secondes += duree.m_secondes;
    //Si le nombre de secondes dépasse 60, on rajoute des minutes
    //Et on met un nombre de secondes inférieur à 60
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    //2 : ajout des minutes
    m_minutes += duree.m_minutes;
    //Si le nombre de minutes dépasse 60, on rajoute des heures
    //Et on met un nombre de minutes inférieur à 60
    m_heures += m_minutes / 60;
    m_minutes %= 60;

    //3 : ajout des heures
    m_heures += duree.m_heures;
    return *this;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);   //On utilise le constructeur de copie de la classe Duree !
    copie += b;       //On appelle la méthode d'addition qui modifie l'objet 'copie'
    return copie;     //Et on renvoie le résultat. Ni a ni b n'ont changé.
}

void Duree::afficher(ostream &flux) const
{
    flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

ostream &operator<<( ostream &flux, Duree const& duree)
{
    duree.afficher(flux) ;
    return flux;
}

