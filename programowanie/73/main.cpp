#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream plik("tekst.txt");
    string tab[1876];
    for(int i=0;i<1876;i++)
    {
        plik>>tab[i];
    }
    int licznik=0;
    for(int i=0;i<1876;i++)
    {
        for(int j=0;j<tab[i].length()-1;j++)
        {
            if(tab[i][j]==tab[i][j+1])
               {
                licznik++;
                break;
               }
        }
    }
    cout<<licznik<<endl;
    float wszystkielit=0;
    for(int i=0;i<1876;i++)
    {
        wszystkielit+=tab[i].length();
    }
    float litery[200];
    for(int i=0;i<1876;i++)
    {
        for(int j=0;j<tab[i].length();j++)
        {
            litery[tab[i][j]]++;
        }
    }
    for(int i=65;i<=90;i++)
    {
        cout<<char(i)<<" "<<int(litery[i])<<" ";
        cout<<fixed<<setprecision(2)<<litery[i]/wszystkielit*100<<"%"<<endl;
    }
    int liczbaslow=0,dlugosc=0,najdl=0;
    string pierwszeslowo="";
    int pr=1;
    for(int i=0;i<1876;i++)
    {
        for(int j=0;j<tab[i].length();j++)
        {
            if(tab[i][j]!='A' && tab[i][j]!='E' && tab[i][j]!='O' && tab[i][j]!='U' && tab[i][j]!='Y' && tab[i][j]!='I')
            {
            dlugosc++;
            if(dlugosc>najdl)
            najdl=dlugosc;
            if(dlugosc==4)
            {
                if(pr==1)
                {
                    pierwszeslowo=tab[i];
                    pr=0;
                }
                liczbaslow++;

            }
            }
            else dlugosc=0;
        }
        dlugosc=0;
    }
    cout<<najdl<<" "<<liczbaslow<<" "<<pierwszeslowo<<endl;
    return 0;
}
