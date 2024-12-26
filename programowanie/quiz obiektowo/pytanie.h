#include <iostream>

using namespace std;

class Pytanie{
public:
    string tresc;
    string a,b,c,d;
    int nr_pytania;
    char poprawna;
    char odpowiedz;
    int punkt;

    void wczytaj(); // wczyt
    void zadaj(); // pokazuje pyt
    void sprawdz();

};
