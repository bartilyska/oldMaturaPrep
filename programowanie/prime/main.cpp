#include <iostream>
using namespace std;
int sumacyfr(int n)
{
    int licznik=0,nastepujaca=100;
    while(n>=1)
    {
        int cyfra=n%10;
        if(nastepujaca>=cyfra)
        {
        nastepujaca=cyfra;
        n=n/10;
        licznik+=cyfra;
        }
        else return -1;
    }
    return licznik;
}
bool czypierwsza(int p)
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
int main()
{
    int n;
    cin>>n;
    const long int k=510000;
    int pierwsza[k]={0};
    for(long int i=2;i*i<=k;i++)
    {
        int w=i*i;
        while(w<=k)
        {
            pierwsza[w]=1;
            w=w+i;
        }
    }
    bool ok=0;
    for(long int i=2;i<=k;i++)
    {
        if(pierwsza[i]==0 && sumacyfr(i)==n)
        {
            cout<<i;
            ok=1;
            break;
        }
    }
    if(ok==0)
        cout<<"BRAK";
    return 0;
}
