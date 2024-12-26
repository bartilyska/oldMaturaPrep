#include <iostream>
#include <fstream>
int nwd(int a,int b)
{
    if(b==0) return a;
    else return nwd(b,a%b);
}
int sumadzielnikow(int n)
{
    int suma=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            suma=suma+i;

        }
    }
    return suma;
}
using namespace std;
int main()
 {
     const int n=500;
     ifstream plik("liczby16.txt");
     int tab[n];
     for(int i=0;i<n;i++)
     {
         plik>>tab[i];
     }
     int zad1=0;
     for(int i=0;i<n-1;i++)
     {
         for(int j=i+1;j<n;j++)
         {
             if(nwd(tab[i],tab[j])==1)
                zad1++;
         }
     }
     cout<<zad1<<endl;
     for(int i=0;i<n;i++)
     {
         int dzielnik=0;
         for(int j=1;j*j<=tab[i];j++)
         {
             if(tab[i]%j==0)
             {
                 dzielnik++;
                 if(j*j!=tab[i])
                dzielnik++;
            }
         }
         if(dzielnik==9) cout<<tab[i]<<endl;
     }
     for(int i=0;i<n;i++)
     {
         if(sumadzielnikow(tab[i])==tab[i])
            cout<<tab[i]<<endl;
     }
    return 0;
 }



