#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED

#include <iostream>
#include "adressepostale.h"
#include "client_exception.h"

using namespace std;

// D�claration des types
enum Sexe {Masculin='M', Feminin='F'};


class Client
{
    private:
        string nom;
        string prenom;
        Sexe sexe;
        string telephone;
        AdressePostale* adresse;

    public:
        //D�/constructeur
        Client(string="\0", string="\0", Sexe=Masculin,
               string="0000000000", AdressePostale* = nullptr);
        virtual ~Client();

        // Accesseurs
        void setNom(string);
        void setPrenom(string);
        void setSexe(Sexe);
        void setTelephone(string);
        void setAdresse(AdressePostale*);

        string getNom();
        string getPrenom();
        string getSexe();
        string getTelephone();
        AdressePostale* getAdresse();

        // Autres m�thodes d'instance
        virtual void afficher();
};

#endif // CLIENT_H_INCLUDED
