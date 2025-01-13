#ifndef DEF_DUREE
#define DEF_DUREE

class Duree 
{
    public :
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    bool estEgal(Duree const& duree) const;
    bool estPlusPetitQue(Duree const& duree) const;


    private : 
    int m_heures;
    int m_minutes;
    int m_secondes;

};

bool operator==(Duree const& duree1, Duree const& duree2);
bool operator<(Duree const& duree1, Duree const& duree2);

#endif