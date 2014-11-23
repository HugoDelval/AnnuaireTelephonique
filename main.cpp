#include "Annuaire.h"

using namespace std;

int main()
{
    Annuaire monAnnuaire;
    Abonne abonne;
    cin>>abonne;
    monAnnuaire.Ajouter(abonne);
    monAnnuaire.Afficher();
    monAnnuaire.Sauvegarder("annuaire.txt");
    Annuaire ann2;
    ann2.Ajouter("annuaire.txt");
    ann2.Afficher();
    cin>>abonne;
    ann2.Ajouter(abonne);
    ann2.Afficher();
    return 0;
}