#include <iostream>
#include <fstream>
using namespace std;
int nwd(int a,int b)
{
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    return a;
}
int main()
{
    ifstream plik("dane_ulamki.txt");
    float licznik[1000],mianownik[1000];
    for(int i=0;i<1000;i++)
    {
        plik>>licznik[i]>>mianownik[i];
    }
    int minilicznik=12000,minimianownik=12000,odp2=0;
    double miniulamek=1000.0;
    for(int i=0;i<1000;i++)
    {
        if(miniulamek>licznik[i]/mianownik[i])
        {
            miniulamek=licznik[i]/mianownik[i];
            minilicznik=licznik[i];
            minimianownik=mianownik[i];
        }
        if(miniulamek==licznik[i]/mianownik[i] && mianownik[i]<minimianownik)
        {
            miniulamek=licznik[i]/mianownik[i];
            minilicznik=licznik[i];
            minimianownik=mianownik[i];
        }
        if(nwd((int)licznik[i],(int)mianownik[i])==1) odp2++;
    }
    cout<<minilicznik<<" "<<minimianownik<<endl;
    cout<<odp2<<endl;
    //
    int sumalicz=0;
    for(int i=0;i<1000;i++)
    {
        int help,liczniczek=licznik[i],mianowniczek=mianownik[i];
        if(liczniczek<mianowniczek)
            help=liczniczek;
        else
            help=mianowniczek;
        for(int p=2;p<=help;p++)
        {
            while(liczniczek%p==0 && mianowniczek%p==0)
            {
                liczniczek=liczniczek/p;
                mianowniczek=mianowniczek/p;
            }
        }
        sumalicz+=liczniczek;
    }
    cout<<sumalicz<<endl;
    //
    int wspolny=4*9*25*49*13;
    int sumka=0;
    for(int i=0;i<1000;i++)
    {
        int mian=mianownik[i],licz=licznik[i];
        int ilezwiekszyc=wspolny/mian;
        int pozwiekszeniu=licz*ilezwiekszyc;
        sumka+=pozwiekszeniu;
    }
    cout<<sumka<<endl;
    return 0;
}
