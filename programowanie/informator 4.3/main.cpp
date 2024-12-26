#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("dane4.txt");
    ofstream wynik("zadanie4_3.txt");
    const int n = 2023;
    int tab[n];
        for(int i=0;i<n;i++)
            plik>>tab[i];

    int odp=0,maxi=0;
        for(int i=1;i<n;i++)
        {
            int dl=0;
            for(int j=0;j<i;j++)
            {
                if(tab[i]>tab[j])
                dl++;
                if(dl>=maxi)
                {
                    maxi=dl;
                    odp=i;
                }
            }
        }
        wynik<<odp+1;
    return 0;
}
