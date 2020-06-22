#include "client.h"

//------------------ Dé/constructeur ------------------
Client::Client(string nom,
               string prenom,
               Sexe sexe,
               string telephone,
               AdressePostale* adresse)
{
    this->setNom(nom);
    this->setPrenom(prenom);
    this->setSexe(sexe);
    this->setTelephone(telephone);
    this->setAdresse(adresse);
}

Client::~Client()
{
    delete adresse;
}


//------------------ Accesseurs ------------------
void Client::setNom(string nom)
{
    if(nom.size() > 50)
    {
        throw ClientException(ERR_NOM_MAX);
    }
    this->nom = nom;
}

void Client::setPrenom(string prenom)
{
    if(prenom.size() > 50)
    {
        throw ClientException(ERR_PRENOM_MAX);
    }
    this->prenom = prenom;
}

void Client::setSexe(Sexe sexe)
{
    this->sexe = sexe;
}

void Client::setTelephone(string telephone)
{
    if(telephone.size() != 10)
    {
        throw ClientException(ERR_TEL);
    }
    for(int i=0; i < telephone.size(); i++)
    {
        if((telephone[i] < '0') ||
           (telephone[i] > '9'))
        {
            throw ClientException(ERR_TEL);
        }
    }
    this->telephone = telephone;
}

void Client::setAdresse(AdressePostale* adresse)
{
    this->adresse = adresse;
}


string Client::getNom()
{
    return this->nom;
}

string Client::getPrenom()
{
    return this->prenom;
}

string Client::getSexe()
{
    switch(this->sexe)
    {
        case Masculin:
            return "Masculin";
        case Feminin:
            return "Feminin";
        default:
            return "<Sexe non determine !>";
    }
}

string Client::getTelephone()
{
    return this->telephone;
}

AdressePostale* Client::getAdresse()
{
        return this->adresse;
}


//------------------ Autres méthodes d'instance ------------------
void Client::afficher()
{
    cout << "Client : " << getNom() << " - " << getPrenom()
         << " (" << getSexe() << ") - tel: " << getTelephone();

    if(getAdresse() != nullptr)
    {
        cout << " Adresse : " << getAdresse()->toStr();

    }

    cout << endl;
}
