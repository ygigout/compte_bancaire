#ifndef COMPTE_H_INCLUDED
#define COMPTE_H_INCLUDED

#include <iostream>
#include <vector>
#include "operation.h"

using namespace std;


class Compte
{
    private:
        int numero;
        int dateOuverture;
        float solde;
        float decouvertAutorise;
        vector<Operation> operations;

    public:
        //Dé/constructeur
        Compte(int=0, int=0, float=0, float=0);
        ~Compte();

        // Accesseurs
        void setNumero(int);
        void setDateOuverture(int);
        void setSolde(float);
        void setDecouvertAutorise(float);

        int getNumero();
        int getDateOuverture();
        float getSolde();
        float getDecouvertAutorise();

        // Autres méthodes d'instance
        void afficher();
        void afficherOperations();
};

#endif // COMPTE_H_INCLUDED
