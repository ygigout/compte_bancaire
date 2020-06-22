#ifndef BANQUE_H_INCLUDED
#define BANQUE_H_INCLUDED

#include <iostream>
#include "client.h"
#include "operation.h"

using namespace std;


class Banque
{
    private:

    public:
        //D�/constructeur
        Banque();
        ~Banque();

        // Autres m�thodes d'instance
        void listerClients();
        void consulterSoldes(Client);
        void ajouterClient(Client);
        void supprimerClient(Client);
        void modifierClient(Client);
        void ajouterOperation(Operation);
        void supprimerOperation(Operation);
        void modifierOperation(Operation);
        void afficherOperations(int);
        void importerOperations(string);
};

#endif // BANQUE_H_INCLUDED
