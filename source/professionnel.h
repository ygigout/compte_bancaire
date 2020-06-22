#ifndef PROFESSIONNEL_H_INCLUDED
#define PROFESSIONNEL_H_INCLUDED

#include <iostream>
#include "client.h"
#include "adressepostale.h"
#include "pro_exception.h"

using namespace std;


class Professionnel: public Client
{
    private:
        string siret;
        string raisonSociale;
        int anneeCreation;
        AdressePostale* adresseEntreprise;
        string email;

    public:
        //Dé/constructeur
        Professionnel(string="\0", string="\0", Sexe=Masculin, string="0000000000", AdressePostale* = nullptr,
                      string="\0", string="\0", int=0, AdressePostale* = nullptr, string="");
        ~Professionnel();

        // Accesseurs
        void setSiret(string);
        void setRaisonSociale(string);
        void setAnneeCreation(int);
        void setAdresseEntreprise(AdressePostale*);
        void setEmail(string);

        string getSiret();
        string getRaisonSociale();
        int getAnneeCreation();
        AdressePostale* getAdresseEntreprise();
        string getEmail();

        // Autres méthodes d'instance
        void afficher();
};

#endif // PROFESSIONNEL_H_INCLUDED
