#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("plik.txt");
    int t;
    plik>>t;
    ofstream out("wyniki.txt");
    for(int g=1;g<=t;g++)
    {
        bool odp=0;
        int n,k;
        plik>>n>>k;
        char tab[n][k];
        int liczbadrzew=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                plik>>tab[i][j];
                if(tab[i][j]=='^')
                    liczbadrzew++;
            }
        }
        if(liczbadrzew==0)
            odp=1;
        else{
            if(n==1 || k==1)
            {
                if(n*k!=liczbadrzew)
                    odp=0;
            }
            else
            odp=1;
        }
        if(odp==1 && liczbadrzew!=0)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<k; j++)
                {
                    tab[i][j]='^';
                }
            }
        }
        out<<"Case #"<<g<<": ";
        if(odp)
        {
            out<<"Possible"<<endl;
            for(int i=0;i<n;i++)
        {
            for(int j=0;j<k;j++)
            {
                out<<tab[i][j];
            }
            out<<endl;
        }
        }
        else out<<"Impossible"<<endl;

    }
    return 0;
}
