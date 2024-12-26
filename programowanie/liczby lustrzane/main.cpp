#include <iostream>
#include <fstream>
#include <cmath>
#include <algorithm>
using namespace std;
bool czylustrzana(int n,int p)
{
    int wynik=0;
    while(n>0)
    {
        int help=n%10;
        wynik=wynik*10+help;
        n=n/10;
    }
    if(wynik==p) return true;
    else return false;
}
int stworzlustro(int n)
{
    int k=n;
    int iloczyn=-1;
    while(k>0)
    {
        k=k/10;
        iloczyn++;
    }
    int wynik=0;
     while(n>0)
    {
        int help=n%10;
        wynik=wynik+help*pow(10,iloczyn);
        iloczyn--;
        n=n/10;
    }
    return wynik;
}
bool czypierwsza(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int sumazlustra(int n)
{
    int wynik=stworzlustro(n);
    int k=n;
    int iloczyn=0;
    while(k>0)
    {
        k=k/10;
        iloczyn++;
    }
    wynik=wynik+n*pow(10,iloczyn);
}
int nwd(int a,int b)
{
    if(b==0) return a;
    else return nwd(b,a%b);
}
bool czytrojkatna(int n)
{
    int liczba=1;
    if(n==0 || n==1) return true;
    int podstawa=2;
    while(liczba<=n)
    {
        liczba=liczba+podstawa;
        podstawa++;
        if(liczba==n) return true;
    }
    return false;
}
int main()
{
    const int n=3000;
   ifstream plik("liczby.txt");
   int tab[n];
   for(int i=0;i<n;i++)
   {
       plik>>tab[i];
   }
   int zad1=0;
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(czylustrzana(tab[i],tab[j]) && tab[i]>9 && tab[j]>9) zad1++;
       }
   }
   cout<<zad1<<endl;
   int zad2=0;
   int tablica[100];
   int q=0;
   for(int i=0;i<n;i++)
   {
       if(czypierwsza(tab[i]) && czypierwsza(stworzlustro(tab[i])) && tab[i]>9)
          {
              tablica[q]=tab[i];
              zad2++;
              q++;
          }
   }
   cout<<zad2<<endl;
   sort(tablica,tablica+zad2);
   for(int i=0;i<zad2;i++)
   {
       cout<<tablica[i]<<" "<<stworzlustro(tablica[i])<<endl;
   }
   int maxi=sumazlustra(tab[0]);
   for(int i=1;i<n;i++)
   {
        maxi=nwd(maxi,sumazlustra(tab[i]));
   }
   cout<<maxi<<endl;
   int zad4;
   for(int i=0;i<n;i++)
   {
       if(czytrojkatna(tab[i]+stworzlustro(tab[i])) && tab[i]>9)
        zad4++;
   }
   cout<<zad4<<endl;
    return 0;
}
