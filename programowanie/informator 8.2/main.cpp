#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int n=2023;
    int tab[n];
    int licznik=0;
    ifstream plik("dane8.txt");
    ofstream zapis("odp8_2.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(tab[i]>tab[j]) licznik++;
        }
    }
    cout<<licznik;
    return 0;
}
