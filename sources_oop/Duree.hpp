#ifndef DEF_DUREE
#define DEF_DUREE

#include<iostream>

class Duree 
{
    public :
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    bool estEgal(Duree const& duree) const;
    bool estPlusPetitQue(Duree const& duree) const;
    Duree& operator+=(Duree const& duree);
    void afficher(std::ostream &flux) const;


    private : 
    int m_heures;
    int m_minutes;
    int m_secondes;

};

bool operator==(Duree const& duree1, Duree const& duree2);
bool operator<(Duree const& duree1, Duree const& duree2);
Duree operator+(Duree const& duree1, Duree const& duree2);
std::ostream &operator<<( std::ostream &flux, Duree const& duree);

#endif