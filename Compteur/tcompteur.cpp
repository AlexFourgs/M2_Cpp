#include "compteur.h"
#include <iostream>


int main(){
    Compteur c ;

    std::cout << c.valeur() << std::endl;

    for(int i = 0 ; i < 10 ; ++i) c.incr();

    std::cout << c.valeur() << std::endl ;

    for(int i = 0 ; i < 20 ; ++i) c.decr();

    std::cout << c.valeur() << std::endl ;
}
