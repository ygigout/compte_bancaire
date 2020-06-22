#include <iostream>
//#import "banque.h"
#include "client.h"


using namespace std;

int main()
{
    Client c1("Dupont", "Jacques", Masculin);
    Client c2("Duran", "Jeanne", Feminin, "0102030405");
    AdressePostale* ptr_adrC2 = new AdressePostale("2 rue Paul Dautier", "", 78140, "Velizy");

    c2.setAdresse(ptr_adrC2);

    c1.afficher();
    c2.afficher();

    return 0;
}
