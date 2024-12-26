#include <iostream>
#include <fstream>
using namespace std;
int z8(int s)
{
    int wynik=0,iloczyn=1;
    while(s>0)
    {
        wynik=wynik+(s%10*iloczyn);
        iloczyn=iloczyn*8;
        s=s/10;
    }
    return wynik;
}
string na8 (int liczba)
{
    string wynik="";
    if(liczba==0) return "0";
    while(liczba>=1)
    {
        char z=liczba%8+48;
        wynik=z+wynik;
        liczba=liczba/8;
    }
    return wynik;
}
int main()
{
    ifstream plik1("liczby1.txt");
    ifstream plik2("liczby2.txt");
    int tab2[1000],tabna10[1000];
    int tab62[1000];
    for(int i=0;i<1000;i++)
    {
        plik1>>tab62[i];
        plik2>>tab2[i];

    }
    int maxi=0,mini=9999999;
    for(int i=0;i<1000;i++)
    {

        if(tab62[i]>maxi)
            maxi=tab62[i];
        if(tab62[i]<mini)
            mini=tab62[i];
    }
    cout<<maxi<<" "<<mini<<endl;
    //najdluzszy ciag niemalej¹cy
    int licznik=1,odp=1,pierwszyelement=0;
    for(int i=0;i<1000;i++)
    {
        if(tab2[i]<=tab2[i+1])
            licznik++;
        else licznik=1;
        if(odp<=licznik)
        {
            odp=licznik;
            pierwszyelement=tab2[i-licznik+2];
        }
    }
    cout<<odp<<" "<<pierwszyelement<<endl;
    int rowne=0,wartosc1wieksza=0;
    for(int i=0;i<1000;i++)
    {
        tabna10[i]=z8(tab62[i]);
        if(tabna10[i]==tab2[i])
            rowne++;
        if(tabna10[i]>tab2[i])
            wartosc1wieksza++;
    }
    cout<<rowne<<" "<<wartosc1wieksza<<endl;
    int wyst1=0,wyst2=0;
    for(int i=0;i<1000;i++)
    {
        string help=na8(tab2[i]);
        for(int j=0;j<help.length()-1;j++)
        {
            if(help[j]=='6')
            {
                wyst2++;
                break;
            }
        }

    }
    cout<<wyst2<<endl;
    for(int i=0;i<1000;i++)
    {
        while(tab2[i]>0)
        {
            if(tab2[i]%10==6)
            {
                wyst1++;
                break;
            }
            tab2[i]=tab2[i]/10;
        }
    }
    cout<<wyst1<<endl;
    return 0;
}
