#ifndef PARTICULIER_H_INCLUDED
#define PARTICULIER_H_INCLUDED

#include <iostream>
#include "Client.h"

using namespace std;


// Déclaration des types
enum SituationFamiale {Celibataire, Marie, Divroce, Autre};


class Particulier: public Client
{
    private:
        SituationFamiale situationFamiliale;
        int dateNaissance;

    public:
        //Dé/constructeur
        Particulier(string="\0", string="\0", Sexe=Masculin, string="0000000000",
                    SituationFamiale=Autre, int=0);

        // Accesseurs
        void setSituationFamiliale(SituationFamiale);
        void setDateNaissance(int);

        SituationFamiale getSituationFamiliale();
        int getDateNaissance();

        // Autres méthodes d'instance
        void afficher();
};

#endif // PARTICULIER_H_INCLUDED
