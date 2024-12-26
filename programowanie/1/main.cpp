#include <iostream>

using namespace std;
void funkcja()
{
    int kasa,liczba,reszta,licznik;
    int *tab;
    tab = new int [liczba];
    cout<<"Podaj liczbe nominalow: ";
    cin>>liczba;
    for(int i=0;i<liczba;i++)
    {
        cout<<"Podaj nominal: ";
        cin>>tab[i];
    }
    for(int i=0;i<liczba;i++)
    {
        cout<<tab[i];

    }
    for(int i=0;i<liczba;i++)
    {
        if (tab[i]<tab[i+1]) swap(tab[i],tab[i+1]);
    }

    cout<<"Podaj liczbe kasy : ";
    cin>>kasa;
    licznik=0;
    for(int i = 0 ;i<liczba; i++)
    {
        licznik = licznik + kasa/tab[i];
        kasa = kasa%tab[i];
    }
    cout<<"Potrzeba tyle nominalow: "<<licznik<<endl;
    cout<<"Zostalo reszty: " << kasa<<endl;
    delete [] tab;
}
int main()
{
    int t;
    cout<<"Podaj liczbe testow: "<<endl;
    cin>>t;
    for (int i = 0;i<t;i++)
    {
        funkcja();
    }
    return 0;
}
