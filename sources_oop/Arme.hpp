#ifndef ARME_HPP
#define ARME_HPP 

#include <string>
class Arme 
{
    public :

    Arme();
    Arme(std::string nomArme, int degatArme);
    void changer(std::string nomArme, int degatArme);
    void afficher() const;
    int getDegat() const;

    private : 
    std::string m_nomArme;
    int m_degatArme;
};
#endif