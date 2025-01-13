#include "Duree.hpp"

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
