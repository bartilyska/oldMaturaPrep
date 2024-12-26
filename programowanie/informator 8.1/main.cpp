#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    const int n=2023;
    int tab[n];
    int luka=0,licz_parzyste=0,licz_nieparzyste=0;
    ifstream plik("dane8.txt");
    ofstream zapis("odp8_1.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<n-1;i++)
    {
        luka=abs(tab[i]-tab[i+1]);
        if(luka%2==0) licz_parzyste++;
        else licz_nieparzyste++;
    }
    cout<<licz_parzyste<<" "<<licz_nieparzyste<<endl;
    return 0;
}
