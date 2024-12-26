#include <iostream>
#include <fstream>
using namespace std;
int nwd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
            else
            b=b-a;
    }
    return a;
}
int main()
{
    //wczytywanie
    int tab[200];
    ifstream plik("liczby.txt");
   for(int i=0;i<200;i++)
   {
       plik>>tab[i];
   }
   //liczby ponizej tysiaca i wypisac dwie ostatnie z pliku (<1000)
   int licznik=0,ostatnia=0,przedostatnia=0;
   for(int i=0;i<200;i++)
   {
       if(tab[i]<1000)
       {
           licznik++;
           przedostatnia=ostatnia;
           ostatnia=tab[i];
       }
   }
   cout<<licznik<<endl;
   cout<<przedostatnia<<" "<<ostatnia<<endl;
    //zadanie liczba ma miec 18 dzielnikow i je podac rosnaco
   for(int i=0;i<200;i++)
   {
       int liczba_dziel=0;
       for (int j=1;j*j<tab[i];j++)
       {
           if(tab[i]%j==0) liczba_dziel++;
       }
       if(liczba_dziel==9)
       {
           cout<<tab[i]<<endl;
           for(int k=1;k<=tab[i];k++)
           {
               if(tab[i]%k==0)
                cout<<k<<" ";
           }
           cout<<endl;
       }
   }
   //zadanie znajdz najwieksza liczbe wzglednie pierwsza z innymi
   //nie ma wspolnego dzielnika poza jedynka
   int liczba=0;
   for(int i=0;i<200;i++)
   {
       int licz=0;
        for(int j=0;j<200;j++)
        {
            if(tab[i]==tab[j] || nwd(tab[i],tab[j])==1)
                licz++;
        }
        if(licz==200 && tab[i]>liczba)
            liczba=tab[i];
   }
   cout<<liczba<<endl;
    return 0;
}
