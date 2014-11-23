#include "Abonne.h"

static const char SEP='|';

ostream & operator<<(ostream &os, const Abonne &a)
{
    os << a.nom << SEP
       << a.infos.Prenom << SEP
       << a.infos.Adresse << SEP
       << a.infos.NumTel << endl;
    return os;
}

istream & operator>>(istream &is, Abonne &a)
{
    getline(is,a.nom,SEP);
    getline(is,a.infos.Prenom,SEP);
    getline(is,a.infos.Adresse,SEP);
    getline(is,a.infos.NumTel); //par defaut \n

    return is;
}