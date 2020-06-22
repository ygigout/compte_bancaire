#ifndef PROFESSIONNEL_H_INCLUDED
#define PROFESSIONNEL_H_INCLUDED

#include <iostream>
#include "Client.h"

using namespace std;


class Professionnel: public Client
{
    private:
        string siret;
        string raisonSociale;
        int anneeCreation;
        string email;

    public:
        //Dé/constructeur
        Professionnel(string="\0", string="\0", Sexe=Masculin, string="0000000000",
                      string="\0", string="\0", int=0, string="");
        ~Professionnel();

        // Accesseurs
        void setSiret(string);
        void setRaisonSociale(string);
        void setAnneeCreation(int);
        void setEmail(string);

        string setSiret();
        string setRaisonSociale();
        int setAnneeCreation();
        string setEmail();

        // Autres méthodes d'instance
        void afficher();
};

#endif // PROFESSIONNEL_H_INCLUDED
