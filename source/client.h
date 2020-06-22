#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include <iostream>
#include "adressepostale.h"

using namespace std;

// Déclaration des types
enum Sexe {Masculin='M', Feminin='F'};


class Client
{
    private:
        string nom;
        string prenom;
        Sexe sexe;
        string telephone;
        AdressePostale adresse;

    public:
        //Dé/constructeur
        Client(string="\0", string="\0", Sexe=Masculin, string="0000000000");
        ~Client();

        // Accesseurs
        void setNom(string);
        void setPrenom(string);
        void setSexe(Sexe);
        void setTelephone(string);
        void setAdresse(AdressePostale);

        string getNom();
        string getPrenom();
        Sexe getSexe();
        string getTelephone();
        AdressePostale getAdresse();

        // Autres méthodes d'instance
        void afficher();
};

#endif // CLIENT_H_INCLUDED
