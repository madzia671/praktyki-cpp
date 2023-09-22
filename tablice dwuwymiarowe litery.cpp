#include <iostream>
using namespace std;

int a = 0;
int b = 0;
string x;
string pomoc;
int licz = 0;

int main()
{

    //int n = 0;
    //cin >> n;
    //int* tab = new int[n];

     //tablica z liczb jakie wypiszemy - tablica dynamiczna
    cout << "podaj a: " << endl;
    cin >> a;
    cout << "podaj b: " << endl;
    cin >> b;
    cout << "podaj litere do policzenia" << endl;
    cin >> x;

    // tablica na wskazniki
    string** tablica = new string * [a];

    // generowanie poszczegolnych wymiarów
    for (int i = 0; i < a; i++)
        tablica[i] = new string[b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            string nowy = "";
            for (int i = 0; i < 10; i++)
                pomoc= char(rand() % 26 + 65);     //zamienianie liczb na litery
            nowy += pomoc;
            if (x == pomoc)
            {
                licz++;
            }
             tablica[i][j] = nowy;
        }
    }

    //tablica 2 wymiarowa z literkami

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }

    //wyswietlenie tablicy 2 wymiarowej


    cout << "litera " << x << "wyswietla sie " << licz << " razy" << endl;

}

