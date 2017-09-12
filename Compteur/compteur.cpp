#include "compteur.h"

Compteur::Compteur()
{
    m_valeur = 0 ;
}

Compteur::~Compteur()
{

}

void Compteur::incr()
{
    m_valeur++ ;
}

void Compteur::decr()
{
    if(m_valeur)
    {
        m_valeur-- ;
    }
}

int Compteur::valeur() const
{
    return m_valeur ;
}
