#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int n=10000,licz=0;
    char tab[n];
   ifstream plik("mecz.txt");
   for(int i=0;i<n;i++)
   {
       plik>>tab[i];
   }
   for(int i=0;i<n-1;i++)
   {
       if(tab[i]!=tab[i+1])
        licz++;
   }
   cout<<licz<<endl;
   //zad2
   int wynika=0,wynikb=0,j=0;
   char druz;
   while((wynika<1000 && wynikb<1000) || fabs(wynika-wynikb)<3)
    {
        if(tab[j]=='A') wynika++;
        else wynikb++;
        j++;
    }
    if(wynika>wynikb)
        druz='A';
    else druz='B';
    cout<<druz<<" " <<wynika<< " "<<wynikb<<endl;
    //zad3
    int passa=0,ciag=1,maxpassa;
    char d;
    for(int i=0;i<n-1;i++)
    {
        if(tab[i]==tab[i+1])
            ciag++;
        else ciag=1;
        if(ciag==10)
            passa++;
        if(maxpassa<ciag)
        {
           maxpassa=ciag;
           d=tab[i];
        }
    }
    cout<<passa<<" "<<d<<" "<<maxpassa<<endl;
}
