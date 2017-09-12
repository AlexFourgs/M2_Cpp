#ifndef COMPTEUR_H
#define COMPTEUR_H

class Compteur{
protected:
    int m_valeur ;

public:
    Compteur();
    ~Compteur();
    void incr();
    void decr();
    int valeur() const;
};

#endif // COMPTEUR_H
