/** Name : test_polymor.cpp
     Goal : Implémentation des méthodes pour test  POLYMORPHISME
     Author : Nebbra Matthieu
     Date : 2021/06/25
**/
#include <iostream>
#include "test_polymor.h"

void Vehicule::affiche() const
{
    std::cout << "Ceci est un vehicule." << std::endl;
}


void Voiture::affiche() const
{
    std::cout << "Ceci est une voiture." << std::endl;
}


void Moto::affiche() const
{
    std::cout << "Ceci est une moto." << std::endl;
}
