#include "operation.h"


//------------------ Dé/constructeur ------------------
Operation::Operation(int date, CodeOperation code, float montant)
{
    this->setDate(date);
    this->setCode(code);
    this->setMontant(montant);
}

Operation::~Operation() {}

//------------------ Accesseurs ------------------
void Operation::setDate(int date) {this->date = date;}

void Operation::setCode(CodeOperation code) {this->code = code;}

void Operation::setMontant(float montant) {this->montant = montant;}


int Operation::getDate() {return this->date;}

string Operation::getCode()
{
    switch(this->code)
    {
        case Retrait_DAB: return "1";
        case Paiement_CB: return "2";
        case Depot_Guichet: return "3";
        default: return "<Code d'operation inconnu !>";
    }
}

float Operation::getMontant() {return this->montant;}

//------------------ Autres méthodes d'instance ------------------
void Operation::afficher()
{
    cout << this->getDate() << " : "
         << this->getCode() << " : "
         << this->getMontant() << " euros" << endl;
}
