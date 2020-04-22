#include <iostream>
#include <cstring>
using namespace std;

#include "biblio.h"
#include "osoba.h"

int biblio::ile_ksiazek;

/*************************************************************/
int main()
{
    biblio ksiazka[100];
    osoba osoba[100];
    int indeks_ksiazka, indeks_osoba;
    char zmienna = ' ';

    ksiazka[0].WCZYTAJ_dane("Albert", "Einstein", "Prace naukowe", 1955, 90210, 1);
    ksiazka[1].WCZYTAJ_dane("Ruediger", "Schubart", "Rozprawy naukowe", 1926, 90211, 2);
    ksiazka[2].WCZYTAJ_dane("Claudia", "Bach", "Publikacje", 1725, 90212, 3);
    ksiazka[3].WCZYTAJ_dane("Neil", "Armstrong", "Przewodniki", 1837, 90213, 4);

    osoba[0].DODAJ_osobe("Jan", "Kowalski");
    osoba[1].DODAJ_osobe("Anna", "Nowak");

////////////////////// MENU PROGRAMU ////////////////////////
    while (zmienna != 'e')
    {
        cout << "Program pozwala na nastepujace czynnosci:" << endl;
        cout << "1 - Dodaj nowa ksiazke" << endl;
        cout << "2 - Wypisz dane wybranej pozycji" << endl;
        cout << "3 - Dodaj nowa osobe" << endl;
        cout << "4 - Wyporzycz ksiazke" << endl;
        cout << "5 - Oddaj ksiazke" << endl;
        cout << "6 - Sprawdz wyporzyczone ksiazki przez osobe" << endl;
        cout << "e - wyjscie" << endl;

        cout << "Wybierz co chcesz zrobic: ";
        cin >> zmienna;

        //menu
        switch (zmienna)
        {
        case '1':
            cout << "Podaj indeks ksiazki ktora chcesz dodac: ";
            cin >> indeks_ksiazka;

            cout << "Podaj imie autora: ";
            char imie_new[80];
            cin >> imie_new;

            cout << "Podaj nazwisko autora: ";
            char nazwisko_new[80];
            cin >> nazwisko_new;

            cout << "Podaj tytul ksiazki: ";
            char tytul_new[80];
            cin >> tytul_new;

            cout << "Podaj rok wydania: ";
            int rok_new;
            cin >> rok_new;

            cout << "Podaj numer wydania: ";
            int wydanie_new;
            cin >> wydanie_new;

            cout << "Podaj numer rejestru: ";
            int pozycja_new;
            cin >> pozycja_new;

            ksiazka[indeks_ksiazka].WCZYTAJ_dane(imie_new, nazwisko_new, tytul_new, rok_new, wydanie_new, pozycja_new);
            break;
        case '2':
            cout << "Wpisz indeks pozycji jaka chcesz wczytac: ";
            cin >> indeks_ksiazka;

            cout << "Dane ktore teraz sa zapamietane w obiekcie ksiazka[" << indeks_ksiazka << "] \n";

            ksiazka[indeks_ksiazka].WYPISZ_dane();
            break;
        case '3':
            cout << "Podaj indeks osoby ktora chcesz dodac: ";
            cin >> indeks_osoba;

            cout << "Dane ktore teraz sa zapamietane w obiekcie osoba[" << indeks_osoba << "] \n";

            cout << "Podaj imie osoby: ";
            char imie_new_o[80];
            cin >> imie_new_o;

            cout << "Podaj nazwisko osoby: ";
            char nazwisko_new_o[80];
            cin >> nazwisko_new_o;

            osoba[indeks_osoba].DODAJ_osobe(imie_new_o, nazwisko_new_o);
            break;
        case '4': //wyporzycz

            if (ksiazka[0].CZY_mozna(ksiazka[0].ile_ksiazek))
            {
                cout << "Podaj indeks ksiazki do wyporzyczenia: ";
                cin >> indeks_ksiazka;
                cout << "Podaj indeks osoby wyporzyczajacej: ";
                cin >> indeks_osoba;

                osoba[indeks_osoba].WYPORZYCZ_ksiazke(indeks_ksiazka);
            }

            else
                cout << "Brak ksiazek do wypozyczenia!";

            break;
        case '5': //oddaj
            cout << "Podaj indeks ksiazki do oddania: ";
            cin >> indeks_ksiazka;
            cout << "Podaj indeks osoby oddajacej: ";
            cin >> indeks_osoba;

            osoba[indeks_osoba].ODDAJ_ksiazke(indeks_ksiazka);
            break;
        case '6': //sprawdzenie wyporzyczen
            cout << "Podaj indeks osoby ktora chcesz wyswietlic: ";
            cin >> indeks_osoba;

            osoba[indeks_osoba].WYPISZ_osobe();

            //jake posiada
            cout << "Ksiazki jakie posiada:" << endl;
            for (int i = 0; i < 5; i++)
            {
                if (osoba[indeks_osoba].spis_ksiazek[i] > 0)
                {
                    ksiazka[osoba[indeks_osoba].spis_ksiazek[i] - 1].WYPISZ_dane();
                }
            }
            break;
        default:
        {
            if (zmienna != 'e')
                cout<<"Blednie wprowadzony znak!" << endl;
            else
            {
                cout<<"Koniec dzialania programu!" << endl;
                break;
            }
        }
        }
    }
}
