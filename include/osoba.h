#ifndef OSOBA_H
#define OSOBA_H
#include <iostream>

class osoba
{
public:
    int spis_ksiazek[5] = {0,0,0,0,0};

    osoba();
    virtual ~osoba();
    void DODAJ_osobe (const char * napis1, const char * napis2);
    void WYPISZ_osobe ()
    {
        std::cout << "Imie: " << imie_osoby << ", Nazwisko: " << nazwisko_osoby << ", Ile ksiazek wyporzyczyl: " << ile_posiada << std::endl;
    }
    void WYPORZYCZ_ksiazke(int pozycja);
    void ODDAJ_ksiazke(int pozycja);

protected:

private:
    char imie_osoby[80];
    char nazwisko_osoby[80];
    int ile_posiada = 0;
};

#endif // OSOBA_H
