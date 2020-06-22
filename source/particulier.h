#ifndef PARTICULIER_H_INCLUDED
#define PARTICULIER_H_INCLUDED

#include <iostream>
#include "Client.h"

using namespace std;


// D�claration des types
enum SituationFamiale {Celibataire, Marie, Divroce, Autre};


class Particulier: public Client
{
    private:
        SituationFamiale situationFamiliale;
        int dateNaissance;

    public:
        //D�/constructeur
        Particulier(string="\0", string="\0", Sexe=Masculin,
                    string="0000000000", AdressePostale* = nullptr,
                    SituationFamiale=Autre, int=0);
        ~Particulier();

        // Accesseurs
        void setSituationFamiliale(SituationFamiale);
        void setDateNaissance(int);

        string getSituationFamiliale();
        int getDateNaissance();

        // Autres m�thodes d'instance
        void afficher();
};

#endif // PARTICULIER_H_INCLUDED
