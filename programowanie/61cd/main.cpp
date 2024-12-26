#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int tab[1000],roznica,ciag[1000];
    ifstream plik("bledne.txt");
    for(int i=0;i<20;i++)
    {
        int dlugosc;
        plik>>dlugosc;
        for(int j=0;j<dlugosc;j++)
        {
            plik>>tab[j];
        }
        for(int k=0;k<dlugosc;k++)
        {
            roznica=tab[1]-tab[0];
            if(roznica!=tab[2]-tab[1]) cout<<tab[k];
            else
            {
                ciag[0]=tab[0];
                ciag[k+1]=ciag[0]+roznica;
            }
        }
        for(int l=0;l<dlugosc;l++)
        {
            if(ciag[l]!=tab[l]) cout<<tab[l]<<endl;
        }
    }
    return 0;
}
