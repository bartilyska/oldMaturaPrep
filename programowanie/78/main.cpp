#include <iostream>
#include <fstream>
using namespace std;
string dop(string n)
{
    int x=n.length();
    for(int i=0;i<8-(x%8);i++)
    {
        n=n+".";
    }
    return n;
}
int main()
{
    string wiadomosci[11];
    int kody[11][8];
    ifstream wiadomosc("wiadomosci.txt");
    ifstream podpisy("podpisy.txt");
    for(int i=0;i<11;i++)
    {
        getline(wiadomosc,wiadomosci[i]);
    }
    string napis=dop(wiadomosci[0]);
    cout<<dop(napis).length()<<endl;
    int tab[8]={'A','L','G','O','R','Y','T','M'};
    for(int i=0;i<napis.length();i++)
    {
        tab[i%8]=(tab[i%8]+napis[i])%128;
    }
    for(int i=0;i<8;i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    string odp="";
    for(int i=0;i<8;i++)
    {
        odp=odp+char(65+tab[i]%26);
    }
    cout<<odp<<endl;
    for(int i=0;i<11;i++)
    {
        for(int j=0;j<8;j++)
        {
            podpisy>>kody[i][j];
        }
    }
    string pod[11];
    for(int i=0;i<11;i++)
    {
        string podpis="";
        for(int j=0;j<8;j++)
        {
            long long int x=kody[i][j]*3%200;
            podpis=podpis+char(x);
            pod[i]=podpis;
        }
        cout<<podpis<<endl;
    }
    for(int k=0;k<11;k++)
    {
    wiadomosci[k]=dop(wiadomosci[k]);
    int tab[8]={'A','L','G','O','R','Y','T','M'};
    for(int i=0;i<wiadomosci[k].length();i++)
    {
        tab[i%8]=(tab[i%8]+wiadomosci[k][i])%128;
    }
    string odp="";
    for(int i=0;i<8;i++)
    {
        odp=odp+char(65+tab[i]%26);
    }
    if(odp==pod[k]) cout<<k+1<<" "<<"zgodny"<<endl;
    else cout<<k+1<<" "<<"niezgodny"<<endl;
    }
    return 0;
}
