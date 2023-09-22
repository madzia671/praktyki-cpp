#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int tab[10];
    srand(time(NULL)); //zeby za kazdym razem losowalo inne liczby
    for (int i = 0; i < 10; i++)
    {
       // cout << "wpisz liczbe numer" << i + 1 << ": ";
        //cin >> tab[i];
        //wypelnienie tablicy liczbami wybranymi przez uzytkownika
        tab[i] = rand()%10000-5000; 
        //% jest po to ze od wylosowanej liczby odejmie 5000 i dzieki temu moze byc liczb aujemna w tablicy
    }


    int suma = 0;

    for (int i = 0; i < 10; i++)
    {
        suma += tab[i];
    }
    cout << endl << "suma wszystkich liczb to: " << suma;

    //dodanie do sb wszystkich liczb w tablicy

    int min = tab[0];
    int max = tab[0];

    for (int i = 0; i < 10; i++)
    {
        if (min > tab[i])
            min = tab[i];
        if (max < tab[i])
            max = tab[i];
    }

    //wartosc min i max z tablicy

    cout << endl << "najwieksza liczba to:" << max << endl;
    cout << endl << "najmniejsza liczba to:" << min << endl;
    cout << endl << "roznica to:" << max - min << endl;
    cout << endl << "iloczyn to:" << tab[0] * tab[9] << endl;

    cout << endl << "tablica wypisana od tylu: " << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << endl << tab[i] << endl;
    }

    //tablica wypisana od tylu


    for (int i = 0; i < 10; i++)
    {
        if(tab[i] < 0)
        {
            cout << "w tablicy jest liczba ujemna";
            break;
        } 
    }


    //czy jest liczba ujemna w tablicy
}