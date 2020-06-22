#ifndef ADRESSEPOSTALE_H_INCLUDED
#define ADRESSEPOSTALE_H_INCLUDED

#include <iostream>
#include <sstream>

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
        AdressePostale(string="\0", string="\0", int=0, string="\0");
        ~AdressePostale();

        // Accesseurs
        void setLibelle(string);
        void setComplement(string);
        void setCodePostal(int);
        void setVille(string);

        string getlibelle();
        string getComplement();
        int getCodePostal();
        string getVille();

        // Autres méthodes d'instance
        string toStr();
};

#endif // ADRESSEPOSTALE_H_INCLUDED
