#include "particulier.h"


//------------------ Dé/constructeur ------------------
Particulier::Particulier(string nom, string prenom, Sexe sexe,
                         string telephone, AdressePostale* adresse,
                         SituationFamiale situFam, int dateNaissance)
    :Client(nom, prenom, sexe, telephone, adresse)
{
    this->setSituationFamiliale(situFam);
    this->setDateNaissance(dateNaissance);
}

Particulier::~Particulier()
{
}


//------------------ Accesseurs ------------------
void Particulier::setSituationFamiliale(SituationFamiale situFam)
{
    this->situationFamiliale = situFam;
}

void Particulier::setDateNaissance(int dateNaissance)
{
    this->dateNaissance = dateNaissance;
}


string Particulier::getSituationFamiliale()
{
    switch(this->situationFamiliale)
    {
        case Celibataire:
            return "Celibataire";
        case Marie:
            return "Marie(e)";
        case Divroce:
            return "Divroce(e)";
        case Autre:
            return "Autre";
        default:
            return "<Situation familiale non determinee !>";
    }
}

int Particulier::getDateNaissance()
{
    return this->dateNaissance;
}


//------------------ Autres méthodes d'instance ------------------
void Particulier::afficher()
{
    Client::afficher();
    cout << "  " << this->getSituationFamiliale()
         << ", ne(e) le " << this->getDateNaissance() << endl;
}
