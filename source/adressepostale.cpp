#include "adressepostale.h"

//------------------ Dé/constructeur ------------------
AdressePostale::AdressePostale(string libelle, string complement, int codePostal, string ville)
{
    this->setLibelle(libelle);
    this->setComplement(complement);
    this->setCodePostal(codePostal);
    this->setVille(ville);
}

AdressePostale::~AdressePostale()
{
}

//------------------ Accesseurs ------------------
void AdressePostale::setLibelle(string libelle) { this->libelle = libelle; }
void AdressePostale::setComplement(string complement) { this->complement = complement; }
void AdressePostale::setCodePostal(int codePostal) { this->codePostal = codePostal; }
void AdressePostale::setVille(string ville) { this->ville = ville; }

string AdressePostale::getlibelle() {return this->libelle;}
string AdressePostale::getComplement() {return this->complement;}
int AdressePostale::getCodePostal() {return this->codePostal;}
string AdressePostale::getVille() {return this->ville;}


//------------------ Autres méthodes d'instance ------------------
string AdressePostale::toStr()
{
    ostringstream oss;

    oss << getlibelle();
    if( getComplement().size() != 0 )
    {
        oss << " (" << getComplement() << ")";
    }
    oss << " - " << getCodePostal() << " " << getVille();

    return oss.str();
}
