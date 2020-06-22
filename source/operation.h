#ifndef OPERATION_H_INCLUDED
#define OPERATION_H_INCLUDED

#include <iostream>

using namespace std;


// D�claration des types
enum CodeOperation {Retrait_DAB=1, Paiement_CB=2, Depot_Guichet=3};


class Operation
{
    private:
        int date;
        CodeOperation code;
        float montant;

    public:
        //D�/constructeur
        Operation(int, CodeOperation, float);
        ~Operation();

        // Accesseurs
        void setDate(int);
        void setCode(CodeOperation);
        void setMontant();

        int getDate();
        CodeOperation getCode();
        float getMontant(float);

        // Autres m�thodes d'instance
        void afficher();
};

#endif // OPERATION_H_INCLUDED
