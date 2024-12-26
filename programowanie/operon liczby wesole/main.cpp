#include <iostream>
#include <fstream>
using namespace std;
int sumakwadratowcyfr(int p)
{
    int wynik=0;
    while(p>=1)
    {
        wynik=(p%10)*(p%10)+wynik;
        p=p/10;
    }
    return wynik;
}
bool czywesola(int n)
{
    if(n==0) return false;
    int p=n;
    while(sumakwadratowcyfr(p)!=1 && sumakwadratowcyfr(p)!=4)
    {
        p=sumakwadratowcyfr(p);
    }
    if(sumakwadratowcyfr(p)==1)
        return true;
    else return false;

}
bool czypierwsza(int p)
{
    if(p<2) return false;
    if(p==2) return true;
    if(p%2==0) return false;
    for(int i=3;i*i<=p;i+=2)
    {
        if(p%i==0) return false;
    }
    return true;
}
int main()
{
    const int n=2001;
    int tab[n];
    ifstream plik("liczby.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
        int odp=0;
    for(int i=0;i<n;i++)
    {
        if(czywesola(tab[i]))
        odp++;
    }
    cout<<odp<<endl;
    int ciag=1,maxciag=0,ostatni,pierwszy;
    for(int i=0;i<n-1;i++)
    {
        if(czywesola(tab[i])&& czywesola(tab[i+1]) && tab[i]<tab[i+1])
            ciag++;
        else
            ciag=1;
        if(maxciag<ciag)
        {
            maxciag=ciag;
            ostatni=tab[i+1];
            pierwszy=tab[i+1-ciag+1];
        }
    }
    cout<<maxciag<<endl;
    cout<<ostatni<<endl;
    cout<<pierwszy<<endl;
    int odpik=0;
    for(int i=0;i<n;i++)
    {
        if(czypierwsza(tab[i]) && czywesola(tab[i]))
            odpik++;
    }
    cout<<odpik<<endl;
    return 0;
}
