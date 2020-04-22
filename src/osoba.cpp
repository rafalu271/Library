#include "osoba.h"
#include <cstring>

osoba::osoba()
{
    //ctor
}

osoba::~osoba()
{
    //dtor
}

void osoba::DODAJ_osobe (const char * napis1, const char * napis2)
{
    strcpy(imie_osoby, (napis1 ? napis1 : "Anonim") );
    strcpy(nazwisko_osoby, (napis2 ? napis2 : "Anonim") );
}

void osoba::WYPORZYCZ_ksiazke(int pozycja)
{
    for (int i = 0; i < 5; i++)
    {
        if (spis_ksiazek[i] == 0)
        {
            * spis_ksiazek = pozycja;
            ile_posiada++;
            break;
        }

//        if (spis_ksiazek[i] != 0)
//        {
//            std::cout << "Osoba juz wyporzyczyala ksiazke." << std::endl;
//        }
    }

}

void osoba::ODDAJ_ksiazke(int pozycja)
{
    for (int i = 0; i < 5; i++)
    {
        if (spis_ksiazek[i] == pozycja)
        {
            spis_ksiazek[i] = 0;
            ile_posiada--;
        }

//        if (* spis_ksiazek[i] != pozycja)
//        {
//            std::cout << "Podany numer nie jest posiadany przez ta osobe." << std::endl;
//        }
    }
}
