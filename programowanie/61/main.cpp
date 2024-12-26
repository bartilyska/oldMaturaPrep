#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
bool czyszescian(int n)
{
    for(int i=1;i<=100;i++)
    {
        if(n==pow(i,3)) return true;
    }
    return false;
}
int main()
{

    ifstream plik("ciagi.txt");
    int tab[1000];
    int n,licznik=100,maxroz=0;
    for(int i=0;i<100;i++)
    {
        plik>>n;
        for(int j=0;j<n;j++)
        {
            plik>>tab[j];
        }
        //zad1
        for(int k=0;k<n-1;k++)
        {
            int roznica=tab[1]-tab[0];
            if(roznica!=tab[k+1]-tab[k])
            {
                licznik--;
                roznica=0;
                break;
            }
            if( k==n-2 && maxroz<roznica)
                maxroz=roznica;
        }
        //zad2
        int maxpot3=0;
        for(int l=0;l<n;l++)
        {
            if(czyszescian(tab[l])==true && maxpot3<tab[l])
                maxpot3=tab[l];
        }
        if(maxpot3==0)
        cout<<i<<" "<<"nie znaleziono"<<endl;
        else cout<<i<<" "<<maxpot3<<endl;
        //zad3

    }
    cout<<" zad1 C.ar: "<<licznik<<" Max roznica: "<<maxroz<<endl;
    return 0;
}
