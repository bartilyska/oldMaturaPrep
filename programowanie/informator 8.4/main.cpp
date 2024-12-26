#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int n=2023;
    int tab[n],dl[n]={},maxi=0;
    ifstream plik("dane8.txt");
    ofstream zapis("odp8_4.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
        dl[i]=1;
        for(int j=0;j<i;j++)
        {
            if(tab[j]<tab[i])
            {
                if(dl[j]+1>dl[i])
                    dl[i]=dl[j]+1;
            }
            if(maxi<dl[i])
                maxi=dl[i];
        }
    }
    cout<<maxi;
    return 0;
}
