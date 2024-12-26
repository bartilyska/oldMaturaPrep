#include <iostream>
using namespace std;
bool pierwsza(int p)
{
    if(p<2) return false;
    if(p==2) return true;
    if(p%2==0) return false;
    for(int i=3; i*i<=p; i=i+2)
    {
        if(p%i==0) return false;
    }
return true;
}
int kwadrat(int k)
{
    long long liczba=0;
    while(k>=1)
    {
        int cyfra=k%10;
        k=k/10;
        liczba+=cyfra*cyfra;
    }
    return liczba;
}
bool warunek(int k)
{
    long long liczba=kwadrat(k);
    while(liczba!=1 && liczba!=4)
    {
        liczba=kwadrat(liczba);
    }
    if(liczba==1) return true;
        else return false;
}
int main()
{
    int l,u,k,licznik=0;
    cin>>l>>u>>k;
    for(int i=l;i<=u;i++)
    {
        if(pierwsza(i))
        {
            if(warunek(i))
                {

                    licznik++;
                }
        }
        if(licznik==k)
        {
            cout<<i<<endl;
            break;
        }
    }
    if(licznik<k)
        cout<<-1;
    return 0;
}
