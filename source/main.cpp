#include <iostream>
//#import "banque.h"
#include "client.h"
#include "Particulier.h"

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
    Particulier p1("Leclercq", "Evelyne", Feminin, "0000000000",
                   nullptr, Marie, 1951);
    AdressePostale* ptr_adrP1 = new AdressePostale("1 rue Jean Mermoz", "", 75016, "Paris");
    p1.setAdresse(ptr_adrP1);

    p1.afficher();
    cout << endl;

    return 0;
}
