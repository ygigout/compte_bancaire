#include "compte.h"


//------------------ Dé/constructeur ------------------
Compte::Compte(int numero, int dateOuverture,
               float solde, float decouvertAutorise)
{
}

Compte::~Compte()
{
}


//------------------ Accesseurs ------------------
void Compte::setNumero(int numero) {this->numero = numero;}
void Compte::setDateOuverture(int dateOuverture) {this->dateOuverture = dateOuverture;}
void Compte::setSolde(float solde) {this->solde = solde;}
void Compte::setDecouvertAutorise(float decouvertAutorise) {this->decouvertAutorise = decouvertAutorise;}

int Compte::getNumero() {return this->numero;}
int Compte::getDateOuverture() {return this->dateOuverture;}
float Compte::getSolde() {return this->solde;}
float Compte::getDecouvertAutorise() {return this->decouvertAutorise;}

//------------------ Autres méthodes d'instance ------------------
void Compte::afficher()
{
    cout << "Compte no " << this-getNumero() << " ouvert le "
         << this->getDateOuverture() << " - decouvert autorise de : "
         << this->getDecouvertAutorise() << " - solde : "
         << this->getSolde() << endl;
}

void Compte::afficherOperations()
{
    cout << "Operations du compte no " << this-getNumero() << endl;
    for(int i=0; i<operations.size(); i++)
    {
        operations.at(i).afficher();
    }
}
