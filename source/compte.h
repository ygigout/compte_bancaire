#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED

#include <iostream>

using namespace std;


class Compte
{
    private:
        int numero;
        int dateOuverture;
        float solde;
        float decouvertAutorise;

    public:
        //Dé/constructeur
        Compte(int=0, int=0, float=0, float=0);
        ~Compte();

        // Accesseurs
        void setNumero(int);
        void setDateOuverture(int);
        void setSolde(float);
        void setDecouvertAutorise(float);

        int setNumero();
        int setDateOuverture();
        float setSolde();
        float setDecouvertAutorise();

        // Autres méthodes d'instance
        void afficherOperations();
};

#endif // COMPTE_H_INCLUDED
