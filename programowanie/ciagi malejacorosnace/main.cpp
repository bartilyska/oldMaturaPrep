#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("pi.txt");
    ifstream plik1("pi_przyklad.txt");
    const int n=100;
    int tab[n];
    int odp3=0;
    for(int i=0;i<n;i++)
    {
        plik1>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
        int dlugosc=1;
        bool czyrosnacy=0;
        bool czymalejacy=0;
        bool blad=0;
        for(int j=i;j<n;j++)
        {
            if(czymalejacy==0 && tab[j]<tab[j+1])
            {
                dlugosc++;
                czyrosnacy=1;
            }
             if(czyrosnacy==1 && tab[j]>=tab[j+1] && czymalejacy==0)
            {
                blad=1;
                if(tab[j]==tab[j+1])
                dlugosc++;
            }
            if(czyrosnacy==1 && tab[j]>tab[j+1] && blad==1)
            {
                dlugosc++;
                czymalejacy=1;
            }
            else break;
        }
        if(czyrosnacy && czymalejacy && blad)
        {
            if(dlugosc==6)
            odp3++;
        }
        if(czyrosnacy && czymalejacy && blad)
        {
            cout<<dlugosc<<endl;
                for(int k=i;k<i+dlugosc;k++)
                    {
                        cout<<tab[k];
                    }
            cout<<endl;
        }
    }
    cout<<odp3<<endl;
    return 0;
}
