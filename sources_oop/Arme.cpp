#include "Arme.hpp"
#include <string>
#include <iostream>

using namespace std;

Arme::Arme()
{
    m_nomArme = "Epee rouille";
    m_degatArme = 10;
}
Arme::Arme(string nomArme, int degatArme)
{
    m_nomArme = nomArme;
    m_degatArme = degatArme;
}
void Arme::changer(string nomArme, int degatArme)
{
    m_nomArme = nomArme;
    m_degatArme = degatArme;
}
void Arme::afficher() const 
{
    cout << "Arme : " << m_nomArme << endl;
    cout << "Degat : " << m_degatArme << endl;
}
int Arme::getDegat() const 
{
    return m_degatArme;
}