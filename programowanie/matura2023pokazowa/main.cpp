#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //wczyt
    ifstream plik ("szachy.txt");
    char plansza[125][8][8];
    for(int i=0;i<125;i++)
    {
        for(int j=0;j<8;j++)
        {
            for(int k=0;k<8;k++)
            {
                plik>>plansza[i][j][k];
            }
        }
    }
    // chociaz jedna pusta kolumna 4.1
    int wolneplansze=0;
    for(int i=0;i<125;i++)
    {
        for(int k=0;k<8;k++)
        {
            int licznik=0;
            for(int j=0;j<8;j++)
            {
               if(plansza[i][j][k]!='.') break;
               else licznik++;
            }
            if(licznik==8)
            {
                wolneplansze++;
                break;
            }
        }
    }
    cout<<"Plansz z jedna kolumna wolna: "<<wolneplansze<<endl;
    //najwiecej pustych kolumn
    int odp=0;
    for(int i=0;i<125;i++)
    {
        int pustakolumna=0;
        for(int k=0;k<8;k++)
        {
            int licz=0;
            for(int j=0;j<8;j++)
            {
               if(plansza[i][j][k]!='.') break;
               else licz++;
            }
            if(licz==8) pustakolumna++;
            if(pustakolumna>odp)
                odp=pustakolumna;
        }
    }
    cout<<"Najwieksza liczba kolumn w pozycji: "<<odp<<endl;
    //4.2
    // na ilu planszach rownowaga tyle samo takich samych u dwoch
    // i minimalna ilosc
    int rownowaga=0,minsuma=100;
    for(int i=0;i<125;i++)
    {
        int P=0,W=0,G=0,S=0,H=0,K=0,p=0,w=0,g=0,s=0,h=0,k=0,suma=0;
        for(int j=0;j<8;j++)
        {
            for(int q=0;q<8;q++)
            {
                    if (plansza[i][j][q]=='P')P++;
                    if (plansza[i][j][q]=='W')W++;
                    if (plansza[i][j][q]=='G')G++;
                    if (plansza[i][j][q]=='S')S++;
                    if (plansza[i][j][q]=='H')H++;
                    if (plansza[i][j][q]=='K')K++;
                    if (plansza[i][j][q]=='p')p++;
                    if (plansza[i][j][q]=='w')w++;
                    if (plansza[i][j][q]=='s')s++;
                    if (plansza[i][j][q]=='g')g++;
                    if (plansza[i][j][q]=='h')h++;
                    if (plansza[i][j][q]=='k')k++;
            }
        }
        if(P==p && W==w && G==g && S==s && H==h && K==k)
        {
            rownowaga++;
            suma=P+W+G+S+K+H+p+w+g+s+h+k;
            if(suma<minsuma)
                minsuma=suma;
        }
    }
    cout<<"Plansz z rownowaga: "<<rownowaga<<endl;
    cout<<"Bierek w rownowadze: "<<minsuma<<endl;
    //4.3
    //na ilu planszach szach
    int szach=0;
    for(int i=0;i<125;i++)
    {
        for(int j=0;j<8;j++)
        {
            for(int q=0;q<8;q++)
            {
                if(plansza[i][j][q]=='k')
                {
                    for(int z=q+1;z<8;z++)
                    {
                        if(plansza[i][j][z]=='W'){
                            szach++;
                            break;
                        }
                        if(plansza[i][j][z]!='.')
                        {
                            break;
                        }
                    }
                    for(int z=q-1;z>=0;z--)
                    {
                        if(plansza[i][j][z]=='W'){
                            szach++;
                            break;
                        }
                        if(plansza[i][j][z]!='.')
                        {
                            break;
                        }
                    }
                    for(int z=j+1;z<8;z++)
                    {
                        if(plansza[i][z][q]=='W'){
                            szach++;
                            break;
                        }
                        if(plansza[i][z][q]!='.')
                        {
                            break;
                        }
                    }
                    for(int z=j-1;z>=0;z--)
                    {
                        if(plansza[i][z][q]=='W'){
                            szach++;
                            break;
                        }
                        if(plansza[i][z][q]!='.')
                        {
                            break;
                        }
                    }
                }
            }
        }
    }
    cout<<"Czarny krol szachowany przez wieze: "<<szach<<endl;
    int szach1=0;
    for(int i=0;i<125;i++)
    {
        for(int j=0;j<8;j++)
        {
            for(int q=0;q<8;q++)
            {
                if(plansza[i][j][q]=='K')
                {
                    for(int z=q+1;z<8;z++)
                    {
                        if(plansza[i][j][z]=='w'){
                            szach1++;
                            break;
                        }
                        if(plansza[i][j][z]!='.')
                        {
                            break;
                        }
                    }
                    for(int z=q-1;z>=0;z--)
                    {
                        if(plansza[i][j][z]=='w'){
                            szach1++;
                            break;
                        }
                        if(plansza[i][j][z]!='.')
                        {
                            break;
                        }
                    }
                    for(int z=j+1;z<8;z++)
                    {
                        if(plansza[i][z][q]=='w'){
                            szach1++;
                            break;
                        }
                        if(plansza[i][z][q]!='.')
                        {
                            break;
                        }
                    }
                    for(int z=j-1;z>=0;z--)
                    {
                        if(plansza[i][z][q]=='w'){
                            szach1++;
                            break;
                        }
                        if(plansza[i][z][q]!='.')
                        {
                            break;
                        }
                    }
                }
            }
        }
    }
    cout<<"Bialy krol szachowany przez wieze: "<<szach1<<endl;
    return 0;
}
