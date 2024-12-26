#include <iostream>
#include <fstream>
using namespace std;
int iloczyn(int n)
{
    int wynik=1;
    while(n>=1)
    {
        int cyfra=n%10;
        n=n/10;
        wynik=wynik*cyfra;
    }
    return wynik;
}
int moc(int m)
{
    int ile=1;
    m=iloczyn(m);
    while(m>9)
    {
        m=iloczyn(m);
        ile++;
    }
    return ile;
}
int main()
{
    ifstream plik("liczby.txt");
    long int tab[1000];
    for(int i=0;i<1000;i++)
    {
        plik>>tab[i];
    }
    int odp[9]={0};
    int mini=999999999,maxi=1;
    for(int i=0;i<1000;i++)
    {
        odp[moc(tab[i])]++;
        if(moc(tab[i])==1 && mini>tab[i])
            mini=tab[i];
        if(moc(tab[i])==1 && maxi<tab[i])
            maxi=tab[i];
    }
    for(int i=1;i<9;i++)
    {
        cout<<i<<" "<<odp[i]<<endl;
    }
    cout<<mini<<endl;
    cout<<maxi<<endl;
    return 0;
}
