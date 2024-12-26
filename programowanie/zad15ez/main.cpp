#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
bool czypierwsza(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i=i+2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int sumacyfr(int n,int podstawa)
{
    int wynik=0;
    while(n>0)
    {
        int help=n%podstawa;
        wynik=wynik+help;
        n=n/podstawa;
    }
    return wynik;
}
int main()
{
    const int n=2000;
    int tab[n];
    ifstream plik("liczby15.txt");
    int odp1=0;
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
        if(czypierwsza(tab[i])) odp1++;
    }
    cout<<odp1<<endl;
    cout<<endl;
    sort(tab,tab+n);
    for(int i=0;i<n;i++)
    {
        if(czypierwsza(tab[i])&& czypierwsza(sumacyfr(tab[i],10)) && czypierwsza(sumacyfr(tab[i],2)))
            cout<<tab[i]<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        if(czypierwsza(tab[i]))
        {
            int liczba=tab[i];
            for(int j=i+1;j<n;j++)
            {
                if(tab[j]-liczba==2 && czypierwsza(tab[j]))
                    cout<<liczba<<" "<<tab[j]<<endl;
            }
        }

    }
    return 0;
}
