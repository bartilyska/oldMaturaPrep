#include <iostream>
#include <cmath>
using namespace std;
int suma8(int a,int b)
{
    int suma=0,liczba=0,przeniesc=0,pozycja=1;
    while(a>0 || b>0 || przeniesc>0)
    {
        liczba=a%10+b%10+przeniesc;
        if(liczba>7)
        {
            przeniesc=1;
            liczba=liczba%8;
        }
        else przeniesc=0;
        suma=suma+liczba*pozycja;
        pozycja=pozycja*10;
        a=a/10;
        b=b/10;
    }
    return suma;
}
int roznica8(int a,int b)
{
    int roznica=0,liczba=0,przeniesc=0,pozycja=1;
    while(a>0 || b>0 || przeniesc>0)
    {
        liczba=a%10-przeniesc-b%10;
        if(liczba<0)
        {
            przeniesc=1;
            liczba=liczba+8;
        }
        else przeniesc=0;
        roznica=roznica+liczba*pozycja;
        pozycja*=10;
        a/=10;
        b/=10;
    }
    return roznica;
}
int na10(int n)
{
    int reszta;
    int dziesietna=0,i=0;
    while(n!=0)
    {
        reszta=n%10;
        n=n/10;
        dziesietna+=reszta*pow(8,i);
        i++;
    }
    return dziesietna;
}
int na8(int n)
{
    int reszta;
    int oktalna=0,i=0;
    while(n!=0)
    {
        reszta=n%8;
        n=n/8;
        oktalna+=reszta*pow(10,i);
        i++;
    }
    return oktalna;
}
int mnozenie(int a,int b)
{
    long iloczyn;
    iloczyn=na8(na10(a)*na10(b));
    return iloczyn;
}
float dzielenia(float a,float b)
{
    float iloraz;
    iloraz=na8(na10(a)/na10(b))+(na10(a)%na10(b))/8.0;
    return iloraz;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<suma8(a,b)<<endl;
    cout<<roznica8(a,b)<<endl;
    cout<<mnozenie(a,b)<<endl;
    cout<<dzielenia(a,b)<<endl;
    return 0;
}
