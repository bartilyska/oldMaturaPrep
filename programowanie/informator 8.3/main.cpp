#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int n=2023;
    int tab[n],licznik=1,maxi=0;
    ifstream plik("dane8.txt");
    ofstream zapis("odp8_3.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
        if(tab[i]<tab[i+1])
        {
            licznik++;
        }
        else licznik=1;
        if(maxi<licznik)
        {
            maxi=licznik;
        }
    }
    cout<<maxi;
    return 0;
}
