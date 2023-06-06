/** Name : test_polymor.h
     Goal : Déclaration des classes pour test  POLYMORPHISME
     Author : Nebbra Matthieu
     Date : 2021/06/25
**/


class Vehicule
{
public:
    void affiche() const; //Affiche une description du Vehicule
protected:
    int m_prix; //Chaque véhicule a un prix
};


class Voiture : public Vehicule //Une Voiture EST UN Vehicule
{
public:
    void affiche() const;
private:
    int m_portes; //Le nombre de portes de la voiture
};


class Moto : public Vehicule //Une Moto EST UN Vehicule
{
public:
    void affiche() const;
private:
    double m_vitesse; //La vitesse maximale de la moto
};
