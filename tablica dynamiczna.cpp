#include <iostream>
using namespace std;

int a = 0;
int b = 0;

int main()
{

   //int n = 0;
   //cin >> n;
   //int* tab = new int[n];

    //tablica z liczb jakie wypiszemy - tablica dynamiczna

    cin >> a;
    cin >> b;
    string nowy = "";
    for(int i=0;i<10;i++)
     nowy += char(rand() % 26 + 65);
    cout << a;

    //zamienianie liczb na litery




    int wymiar = 3; //rozmiar

    // tablica na wskazniki
    string** tablica = new string* [a];

    // generowanie poszczegolnych wymiarów
    for (int i = 0; i < wymiar; i++)
        tablica[i] = new string[b];



    
}

