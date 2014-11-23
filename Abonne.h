#ifndef ABONNE_H_
#define ABONNE_H_

#include <iostream>
#include <string.h>

using namespace std;

class Abonne
{

    struct Renseignements
    {
        string Prenom;
        string Adresse;
        string NumTel;
        Renseignements(string p="", string a="", string t=""):
                Prenom(p),Adresse(a),NumTel(t){}
    };
private:
    string nom;
    Renseignements infos;
public:
    Abonne(string name="", Renseignements r=Renseignements()):
            nom(name),infos(r){}
friend ostream & operator<<(ostream &os, const Abonne &a);
friend istream & operator>>(istream &is, Abonne &a);
friend class Annuaire;
};


#endif // ABONNE_H_