#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
bool czyp(int p)
{
    if(p<2) return false;
    if(p==2) return true;
    if(p%2==0) return false;
    for(int i=3;i*i<=p;i+=2)
    {
        if(p%i==0) return false;
    }
    return true;
}
int odbicie(int p)
{
    int odp=0,i=10;
    while(p>=1)
    {
        int help=p%10;
        p=p/10;
        odp=(odp*i)+help;
    }
    return odp;
}
int main()
{
    int n=100;
    int tab[n];
    int t[n];
    int p[10000]={0};
    ifstream plik("liczby.txt");
    ifstream pomoc("przyklad.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
        if(odbicie(tab[i])%17==0)
            cout<<odbicie(tab[i])<<endl;
    }
    cout<<endl<<endl;
    int maxi=0,liczba=0;
    for(int i=0;i<n;i++)
    {
        t[i]=abs(tab[i]-odbicie(tab[i]));
        if(t[i]>maxi)
        {
            maxi=t[i];
            liczba=tab[i];
        }
    }
    cout<<maxi<<endl;
    cout<<liczba<<endl;
    cout<<endl<<endl;
    for(int i=0;i<100;i++)
    {
        if(czyp(tab[i])&&czyp(odbicie(tab[i])))
            cout<<tab[i]<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        p[tab[i]]++;
    }
    int rozne,dwap,trzyp;
    for(int i=0;i<10000;i++)
    {
        if(p[i]==1)rozne++;
        if(p[i]==2)
        {
            dwap++;
            rozne++;
        }
        if(p[i]==3)
        {
            trzyp++;
            rozne++;
        }
    }
    cout<<rozne<<endl<<dwap<<endl<<trzyp<<endl;
    return 0;
}
