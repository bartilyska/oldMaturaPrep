#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    const int n=100;
    ifstream plik("dane.txt");
    string tab[n];
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    string paczka[100];
    for(int i=0;i<n;i++)
    {
        paczka[i]=tab[i].substr(0,3);
    }
    sort(paczka,paczka+100);
    int odp=0,licznik=1;
    string paczuszka;
    for(int i=0;i<n-1;i++)
    {
        if(paczka[i]==paczka[i+1])
        {
            licznik++;
            if(odp<licznik)
            {
                odp=licznik;
                paczuszka=paczka[i];
            }
        }
        else
        {
            licznik=1;
        }
    }
    cout<<paczuszka<<" "<<odp<<endl;
    string imie[n];
    for(int i=0;i<n;i++)
    {
        for(int j=10;tab[i][j]!='.';j++)
        {
            imie[i]=imie[i]+tab[i][j];
        }
        for(int k=0;k<imie[i].length();k++)
        {
            if(imie[i][k]>'Z')
            {
                imie[i][k]='A'+imie[i][k]-'a';
            }
        }
    }
    sort(imie,imie+100);
    int licz=1;
    for(int wystapienia=100;wystapienia>0;wystapienia--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(imie[i]==imie[i+1])
            {
                licz++;
            }
            else{
                if(licz==wystapienia)
                {
                    cout<<imie[i]<<" "<<licz<<endl;
                }
                licz=1;
            }
        }
    }
    return 0;
}
