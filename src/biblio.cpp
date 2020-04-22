#include "biblio.h"
#include <cstring>

biblio::biblio()
{
    //ctor
}

biblio::~biblio()
{
    //dtor
}

void biblio::WCZYTAJ_dane(const char * napis1, const char * napis2, const char * napis3, int lata, int numer, int pozycja)
{
    strcpy(imie_autora, (napis1 ? napis1 : "Anonim") );
    strcpy(nazwisko_autora, (napis2 ? napis2 : "Anonim") );
    strcpy(tytul, (napis3 ? napis3 : "Anonim") );
    rok = lata;
    nr_wydania = numer;
    nr_pozycji = pozycja;
}

bool biblio::CZY_mozna(int x)
{
    if (x > 0) return true;
    else return false;
}
