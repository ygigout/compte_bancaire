#include "professionnel.h"


//------------------ Dé/constructeur ------------------
Professionnel::Professionnel(string nom, string prenom, Sexe sexe,
                             string telephone, AdressePostale* adresse,
                             string siret, string raisonSociale,
                             int anneeCreation,
                             AdressePostale* adresseEntreprise,
                             string email)
    :Client(nom, prenom, sexe, telephone, adresse)
{
    this->setSiret(siret);
    this->setRaisonSociale(raisonSociale);
    this->setAnneeCreation(anneeCreation);
    this->setAdresseEntreprise(adresseEntreprise);
    this->setEmail(email);
}

Professionnel::~Professionnel()
{
    delete adresseEntreprise;
}

//------------------ Accesseurs ------------------
void Professionnel::setSiret(string siret)
{
    if(siret.size() != 14) throw ProException(ERR_SIRET_MAX);
    this->siret = siret;
}

void Professionnel::setRaisonSociale(string raisonSociale)
{
    if(raisonSociale.size() > 50) throw ProException(ERR_RAISON_MAX);
    this->raisonSociale = raisonSociale;
}

void Professionnel::setAnneeCreation(int anneeCreation)
{
    this->anneeCreation = anneeCreation;
}

void Professionnel::setAdresseEntreprise(AdressePostale* adresseEntreprise)
{
    this->adresseEntreprise = adresseEntreprise;
}

void Professionnel::setEmail(string email)
{
    if(email.find("@") == string::npos) throw ProException(ERR_EMAIL);
}

string Professionnel::getSiret() {return this->siret;}

string Professionnel::getRaisonSociale() {return this->raisonSociale;}

int Professionnel::getAnneeCreation() {return this->anneeCreation;}

AdressePostale* Professionnel::getAdresseEntreprise() {return this->adresseEntreprise;}

string Professionnel::getEmail() {return this->email;}


//------------------ Autres méthodes d'instance ------------------
void Professionnel::afficher()
{
    Client::afficher();
    cout << "  SIRET no " << this->getSiret()
         << " - raison sociale : " << this->getRaisonSociale()
         << " - creation : " << this->getAnneeCreation() << endl;
}
