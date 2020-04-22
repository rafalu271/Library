#ifndef BIBLIO_H
#define BIBLIO_H
#include <iostream>

class biblio
{
public:
    static int ile_ksiazek;

    biblio();
    virtual ~biblio();
    void WCZYTAJ_dane(const char * napis1, const char * napis2, const char * napis3, int lata, int numer, int pozycja);
    void WYPISZ_dane()
    {
        std::cout << "\t" << imie_autora << " " << nazwisko_autora << ", tytul: " << tytul << ", rok wydania: " << rok << ", nr wydania: " << nr_wydania << ", nr pozycji: "<< nr_pozycji << std::endl;
    }
    static bool CZY_mozna(int x);

protected:

private:
    char imie_autora[80];
    char nazwisko_autora[80];
    char tytul[80];
    int rok;
    int nr_wydania;
    int nr_pozycji;
};

#endif // BIBLIO_H
