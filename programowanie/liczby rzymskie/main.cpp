#include <iostream>

using namespace std;

int main()
{
    //Z rzymskiego na arabski
    char tab[7]={'M','D','C','L','X','V','I'};
    int war[7]={1000,500,100,50,10,5,1};
    string liczba;
    cin>>liczba;
    int dl=liczba.length();
    int k[dl];
    int wynik=0,p;
    for(int i=0;i<dl;i++)
    {
        p=0;
        while(liczba[i]!=tab[p])p++;
        k[i]=war[p];
    }
    for(int i=0;i<dl-1;i++)
    {
        if(k[i]<k[i+1])
            wynik=wynik-k[i];
        else
            wynik=wynik+k[i];
    }
        wynik=wynik+k[dl-1];
        cout<<wynik<<endl;
    //z arabskiego na rzymski
    int licz;
    cin>>licz;
    while(licz>=1000)
    {
        cout<<'M';
        licz-=1000;
    }
    if(licz>=900)
    {
        cout<<"CM";
        licz-=900;
    }
    if(licz>=500)
    {
        cout<<'D';
        licz-=500;
    }
    if(licz>=400)
    {
        cout<<"CD";
        licz-=400;
    }
    while(licz>=100)
    {
        cout<<'C';
        licz-=100;
    }
    if(licz>=90)
    {
        cout<<"XC";
        licz-=90;
    }
    if(licz>=50)
    {
        cout<<'L';
        licz-=50;
    }
    if(licz>=40)
    {
        cout<<"XL";
        licz-=40;
    }
    while(licz>=10)
    {
        cout<<'X';
        licz-=10;
    }
    if(licz>=9)
    {
        cout<<"IX";
        licz-=9;
    }
    if(licz>=5)
    {
        cout<<'V';
        licz-=5;
    }
    if(licz>=4)
    {
        cout<<"IV";
        licz-=4;
    }
    while(licz>0)
    {
        cout<<'I';
        licz--;
    }

        return 0;
}
