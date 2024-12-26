#include <iostream>
#include <cmath>
using namespace std;
string binarna(int x)
{

    string wynik="";
    while(x>=1)
    {
    int c=x%2;
    char y=char(c+'0');
    wynik=y+wynik;
    x=x/2;
    }
    return wynik;
}
bool czypierwsza(int p)
{
    if(p==2) return true;
    if(p<2) return false;
    if(p%2==0) return false;
    for(int i=3;i*i<=p;i+=2)
    {
        if(p%i==0) return false;
    }
    return true;
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int dl=a+b;
    int mini=pow(2,dl-1);
    int maxi=2*pow(2,dl-1)-1;
    int odp=0;
    for(int i=mini;i<=maxi;i++)
    {
       string x=binarna(i);
       int licz1=0,licz0=0;
       for(int j=0;j<dl;j++)
       {
           if(x[j]=='1') licz1++;
           if(x[j]=='0') licz0++;
       }
       if(licz1==b && licz0==a)
       {
           if(!czypierwsza(i))
            odp++;
       }
    }
    cout<<odp<<endl;
    return 0;
}
