#ifndef ADRESSEPOSTALE_H_INCLUDED
#define ADRESSEPOSTALE_H_INCLUDED

#include <iostream>

using namespace std;


class AdressePostale
{
    private:
        string libelle;
        string complement;
        int codePostal;
        string ville;

    public:
        //Dé/constructeur
//        Client(nom="\0", prenom="\0", sexe=Masculin, telephone="0000000000");
//        ~Client();

        // Accesseurs
        void setlibelle(string);
        void setComplement(string);
        void setCodePostal(int);
        void setVille(string);

        string getlibelle();
        string getComplement();
        int getCodePostal();
        string getVille();

        // Autres méthodes d'instance
//        void afficher()
};

#endif // ADRESSEPOSTALE_H_INCLUDED
