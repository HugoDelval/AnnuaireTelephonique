#include <fstream>
#include "Annuaire.h"

void Annuaire::Ajouter(const Abonne &a)
{
    if(!a.nom.empty())
    {
        pagesBlaches.insert(make_pair(a.nom,a.infos));
    }
    else
    {
        cout<<"Erreur à l'insertion, le nom est vide."<<endl;
    }
}

void Annuaire::Ajouter(const string &nomFich)
{
    ifstream file(nomFich.c_str());
    Abonne a;
    if(file.good())
    {
        while(file>>a)
        {
            Ajouter(a);
        }
    }
    else
    {
        cout<<"Erreur, fichier \""<<nomFich<<"\" introuvable."<<endl;
    }
}

void Annuaire::Afficher(const string &nomAbonne, ostream &f) const
{
    Tdico::const_iterator debut, fin;
    if(nomAbonne.empty())
    {
        debut=pagesBlaches.begin();
        fin=pagesBlaches.end();
    }
    else
    {
        debut=pagesBlaches.lower_bound(nomAbonne);
        fin=pagesBlaches.upper_bound(nomAbonne);
    }

    for(debut;debut!=fin;debut++)
    {
        f << Abonne(debut->first, debut->second);
    }
}

void Annuaire::Sauvegarder(const string &nomFichier) const
{
    ofstream file(nomFichier.c_str());
    if(file.good())
    {
        Afficher("", file);
    }
    else
    {
        cout<<"Erreur, fichier \""<<nomFichier<<"\" impossible à modifier."<<endl;
    }
}

Annuaire::Annuaire(const string &nomFichier)
{
    if(!nomFichier.empty())
    {
        Ajouter(nomFichier);
    }
}
