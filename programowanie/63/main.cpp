#include <iostream>
#include <fstream>
using namespace std;
int z2 (string napis)
{
    int wynik=0;
    for(int i=0;i<napis.length();i++)
    {
        wynik=wynik*2+(napis[i]-'0');
    }
    return wynik;
}
bool czypolpierwsza(int liczba)
{
    int rozklad=2;
    for(int j=2;j<=liczba;j++)
    {
        while(liczba%j==0)
        {
            liczba=liczba/j;
            rozklad--;
        }
    }
    if(rozklad==0 && liczba==1) return true;
        else return false;
}
int main()
{
    ifstream plik("ciagi.txt");
    string tab[1000];
    for(int i=0;i<1000;i++)
    {
        plik>>tab[i];
        if(tab[i].length()%2==0)
        {
            int licznik=0;
            int srodek=tab[i].length()/2;
            bool pasuje=1;
            for(int j=0;j<srodek;j++)
            {
                if(tab[i][j]!=tab[i][j+srodek])
                {
                    pasuje=0;
                    break;
                }
            }
            if(pasuje) cout<<tab[i]<<endl;
        }
    }
    cout<<endl;
    int odp=0;
    for(int i=0;i<1000;i++)
    {
        bool czyjuz1=0,czygit=1;
        for(int j=0;j<tab[i].length();j++)
        {
            if(czyjuz1 && tab[i][j]=='1')
            {
                czygit=0;
                 break;
            }
            if(tab[i][j]=='1') czyjuz1=1;
            else czyjuz1=0;
        }
        if(czygit) odp++;
    }
    cout<<odp<<endl;
    cout<<endl;
    int licznik=0;
    int maxi=-1,mini=10^19;
    for(int i=0;i<1000;i++)
    {
        int pozamianie=z2(tab[i]);
        if(czypolpierwsza(pozamianie))
        {
            licznik++;
        }
        if(maxi<pozamianie && czypolpierwsza(pozamianie))
        {
            maxi=pozamianie;
        }
        if(mini>pozamianie && czypolpierwsza(pozamianie))
        {
            mini=pozamianie;
        }
    }
    cout<<licznik<<endl;
    cout<<maxi<<endl;
    cout<<mini<<endl;
    return 0;
}
