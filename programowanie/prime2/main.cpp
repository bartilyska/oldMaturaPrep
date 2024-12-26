#include <iostream>
#include <cstdlib>
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
    bool ok=0;
    if(n==2)
    {
        ok=1;
        cout<<2;
        exit(0);
    }
    for(int i=3;i<2147483647;i+=2)
    {
        if(sumacyfr(i)==n)
        {
            if(czypierwsza(i))
            {
                cout<<i;
                ok=1;
                break;
            }
        }
    }
    if(ok==0)
    {
        cout<<"BRAK";
    }
    return 0;
}

