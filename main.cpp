#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double r;
    double v;
    double t;
    double obliczenie;
    cout << "Hello world! V.1.0 ()seba0456" << endl;
    cout << "Witaj w kalkulatorze preedkosci w ruchu po okregu!" << endl;
    cout << "Oto krotka instrukcja." << endl;
    cout << "1.Prosze by wartosc 'r' byla podawana w kilometrach" << endl;
    cout << "2.Prosze by wartosc 't' byla podawana w h" << endl;
    cout << "Dzieki tym zabiegom nie muszisz podawac jednostek" << endl;
    cout << "Zaczynamy!" << endl;
    cout << "Podaj wartosc r" << endl;
    cin >> r;
    cout << "Podaj watosc T" << endl;
    cin >> t;
    obliczenie = (6.28 * r);
    obliczenie = obliczenie / t;
    cout << "Dane:" << endl;
    cout << "T= " << t << endl;
    cout << "r= " << r << endl;
    cout << "Wzor to (2liczba pi*r):t" << endl;
    cout << "V= " << obliczenie << "km/H" << endl;
    cout << "Dziekuje za uzycie narzedzia" << endl;
    cout << "seba0456" << endl;
    cin.sync();
    cin.get();
    return 0;

}

