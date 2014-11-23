#ifndef ANNUAIRE_H_
#define ANNUAIRE_H_

#include "Abonne.h" // string et iostream in it
#include <map>

using namespace std;

class Annuaire
{

private:
    typedef multimap<string,Abonne::Renseignements> Tdico;
    Tdico pagesBlaches;
public:
    void Ajouter(const Abonne &a);
    void Ajouter(const string &nomFich);
    void Afficher(const string &nomAbonne="", ostream &f=cout) const;
//    list<Abonne> Recherche (const string &tel) const;
    void Sauvegarder(const string &nomFichier) const;
    Annuaire(const string &nomFichier="");
};


#endif // ANNUAIRE_H_