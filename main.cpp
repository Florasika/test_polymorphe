/** Name : main.cpp
     Goal : Manipulation des objets VEHICULE pour test  POLYMORPHISME
     Author : Nebbra Matthieu
     Date : 2021/06/25
**/

#include "test_polymor.h"

using namespace std;

void presenter(Vehicule v) //Présente le véhicule passé en argument
{
    v.affiche();
}


int main()
{
    Vehicule v;
    presenter(v);
    Moto m;
    presenter(m);
    return 0;
}
