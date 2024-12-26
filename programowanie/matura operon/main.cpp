#include <iostream>
#include <fstream>
using namespace std;
bool czypierwsza(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int n=2526;
    int tab[n];
    int liczby[10000];
    ifstream plik("dane.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<=10000;i++)
    {
        if(i%2==0) liczby[i]=0;
        else liczby[i]=1;
    }
    for(int i=2;i<=10000;i++)
    {
        if(liczby[i]==1)
        {
            int k=i;
            int licznik=0;
            for(int j=1;j<=10000;j++)
            {
                licznik=licznik+liczby[j];
                if(licznik==k)
                {
                    liczby[j]=0;
                    licznik=0;
                }
            }
        }
    }
    int odp=0;
    for(int i=0;i<n;i++)
    {
        if(liczby[tab[i]]==1) odp++;
    }
    cout<<odp<<endl;
    //zad2
    int pocz=0,dl=0,maxdl=0,maxpocz=0;
    bool ok=1;
    for(int i=0;i<n;i++)
    {
        if(liczby[tab[i]]==1)
        {
            if(ok==1)
            {
                pocz=tab[i];
                ok=0;
            }
            dl++;
            if(dl>maxdl)
            {
                maxdl=dl;
                maxpocz=pocz;
            }
        }
        else
        {
            dl=0;
            ok=1;
            pocz=0;
        }
    }
    cout<<maxdl<<" "<<maxpocz<<endl;
    //zad3
    int odpik=0;
    for(int i=0;i<n;i++)
    {
    if(czypierwsza(tab[i]) && liczby[tab[i]]==1)
        odpik++;
    }
    cout<<odpik<<endl;
    return 0;
}
