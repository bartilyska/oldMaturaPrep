#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;
bool czy_anagram(string a, string b)
{
    int dl1=a.length();
    int dl2=b.length();
    if(dl1!=dl2) return false;
    int licznik[91]={};   // od 65-90 to wielkie litery alfabetu w ASCII
    for(int i=0;i<dl1;i++)
    {
        licznik[a[i]]++;  // jeżeli a[i]=np. T to będzie to 84 z tablicy ASCII wiec w licznik[84] bedzie 1.
    }
    for(int i=0;i<dl1;i++)
    {
        licznik[b[i]]--;     // jeżeli w b[i]=np.T to w licz[84] odejmiemy 1 wiec znowu bedzie 0
    }
    for(int i=0;i<127;i++)
    {
        if(licznik[i]!=0)    // jeżeli będzie gdzieś jedynka to te wyrazy nie są anagramami
            return false;
    }
    return true;
}
int main()
{

    //Wczytanie (potrzeba o 1 wiecej miejsca w tablicy bo iteracja od 1)
    ifstream plik;
    int licznik,wiersze=0;
    string slowo[1001][3];
    plik.open("slowa.txt");
    for(int i=1;i<=1000;i++)
    {
       for(int j=1;j<=2;j++){
        plik>>slowo[i][j];
       }
    }
    plik.close();
    //Zad.1 Ile s³ów koñczy siê na "a"? dlugosc-1 oznacza ostatni¹ litere w s³owie
    for(int i=1;i<=1000;i++)
    {
       for(int j=1;j<=2;j++){
        int dlugosc=slowo[i][j].length();
       if(slowo[i][j][dlugosc-1]=='A')
        licznik++;
       }
    }
    cout<<"Zad.1"<< " "<<licznik<<endl;
    //Zad.3 Szukanie anagramów
    for(int i=1;i<=1000;i++)
    {
       for(int j=1;j<=2;j=j+2)
        {
        if (czy_anagram(slowo[i][j],slowo[i][j+1]))
        wiersze++;
       }
    }

    cout<<"Zad.3"<< " "<<wiersze<<endl;
    return 0;
}
