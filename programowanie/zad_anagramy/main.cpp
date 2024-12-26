#include <iostream>
#include <fstream>
using namespace std;
//Funkcja sprawdzaj�ca czy dwa wyrazy s� anagramami
bool czy_anagram (string a, string b)
{
    int dl1=a.length(); //licznie d�ugosci wyrazow
    int dl2=b.length();
    if(dl1!=dl2) return false; //wyrazy mog� by� anagramami tylko gdy maj� tyle samo liter
    int licz[91]={}; //wypelnienie tablicy zerami (indeks 91 bo litery duze w tablicy ASCII s� od 65 do 90)
    for(int i=0;i<dl1;i++)
    {
        licz[a[i]]++;  // a[i] to litera wyrazy, np T. licz[T]=licz[84] z ASCII
    }                   // wiec dla a[i]=T licz[84]=1
    for(int i=0;i<dl1;i++)
    {
        licz[b[i]]--; // gdy w drugim wyrazie pojawi si� tez T zostanie to  wyzerowane
    }
    for(int i=0;i<91;i++)
    {
        if(licz[i]!=0) return false; // gdy wszystkie miejsca s� wyzerowane to to s� anagramy

    }
    return true;
}
int main()
{
    ifstream plik;
    string slowo [1001][3]; // o 1 indeks wiecej bo zaczynamy iteracje od 1
    int wiersze; // zliczy ilosc wierszy z anagramami
    plik.open("slowa.txt");
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=2;j++)
        {
            plik>>slowo[i][j]; // wczytanie danych z pliku
        }
    }
    //zadanie
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=2;j=j+2) // j+2 bo j++ sprawdzalo by najpierw [i][1] z [i][2] a potem [i][2] z [i][3]
                                //chociaz nie zmienia to wyniku???
        {
            if(czy_anagram(slowo[i][j],slowo[i][j+1]))
                wiersze++; // jezeli s� to anagramy to dodajemy do ilosci wierszy
        }
    }
    cout<<wiersze<<endl;// wypisanie ilosci wierszy z anagramami
    return 0;
}
