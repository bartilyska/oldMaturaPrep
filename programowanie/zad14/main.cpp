#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;
bool czyfib(int n)
{
    if(n==0 || n==1) return true;
    int poprzednia=0;
    int obecna=1;
    int nastepna;
    while(obecna<=n)
    {
        nastepna=obecna+poprzednia;
        if(obecna==n)
            return true;
        poprzednia=obecna;
        obecna=nastepna;
    }
    return false;
}
bool odl(int n,int p)
{
    if(abs(0-n)==p) return true;
    if(abs(1-n)==p) return true;
    int poprzednia=0;
    int obecna=1;
    int nastepna;
    while(obecna<n+4)
    {
        nastepna=obecna+poprzednia;
        if(abs(obecna-n)==p)
            return true;
        poprzednia=obecna;
        obecna=nastepna;
    }
    return false;
}
bool czypierwsza(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i=i+2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    const int n=4000;
    int tab[n];
    ifstream plik("liczby14.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    sort(tab,tab+n);
    int zad1=0;
    for(int i=0;i<n;i++)
    {
        if(czyfib(tab[i]))zad1++;
    }
    cout<<zad1<<endl;
    cout<<"kategoria1: "<<endl;
    for(int i=0;i<n;i++)
    {
        if(odl(tab[i],1) && !(czyfib(tab[i])))
            cout<<tab[i]<<endl;
    }
    cout<<"kategoria2: "<<endl;
    for(int i=0;i<n;i++)
    {
        if(odl(tab[i],2) && !(czyfib(tab[i])))
            cout<<tab[i]<<endl;
    }
    cout<<"kategoria3: "<<endl;
    for(int i=0;i<n;i++)
    {
        if(odl(tab[i],3) && !(czyfib(tab[i])))
            cout<<tab[i]<<endl;
    }
    cout<<endl;
    int zad3=0;
    for(int i=0;i<n;i++)
    {
        if(czyfib(tab[i]) && czypierwsza(tab[i]))
            cout<<tab[i]<<endl;
    }
    return 0;
}
