#include <iostream>
//#import "banque.h"
#include "client.h"
#include "particulier.h"
#include "professionnel.h"

using namespace std;


int main()
{
    cout << "--- TEST SOMMAIRE DES CLIENTS ---" << endl;
    Client c1("Dupont", "Jacques", Masculin);
    Client c2("Duran", "Jeanne", Feminin, "0102030405");
    AdressePostale* ptr_adrC2 = new AdressePostale("2 rue Paul Dautier", "", 78140, "Velizy");

    c2.setAdresse(ptr_adrC2);

    c1.afficher();
    c2.afficher();
    cout << endl;


    cout << "--- TEST SOMMAIRE DES PARTICULIERS ---" << endl;
    Particulier p1("Leclercq", "Evelyne", Feminin, "0000000000", nullptr,
                   Marie, 1951);
    AdressePostale* ptr_adrP1 = new AdressePostale("1 rue Jean Mermoz", "", 75016, "Paris");
    p1.setAdresse(ptr_adrP1);

    p1.afficher();
    cout << endl;


    cout << "--- TEST SOMMAIRE DES PROFESSIONNELS ---" << endl;
    Professionnel pro1("Leroy", "Luc", Masculin, "0000000000", nullptr,
                     "12345678901234", "SNCF", 1800, nullptr, "luc.leroy@sncf.com");
    AdressePostale* ptr_adrPro1 = new AdressePostale("10 rue Rene Descartes", "", 78000, "Versailles");
    AdressePostale* ptr_adrEntr = new AdressePostale("80 avenuee Gaston Boissier", "", 92000, "Nanterre");
    pro1.setAdresse(ptr_adrPro1);
    pro1.setAdresseEntreprise(ptr_adrEntr);

    pro1.afficher();
    cout << endl;

    return 0;
}
