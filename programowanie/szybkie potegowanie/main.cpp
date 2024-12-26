#include <iostream>

using namespace std;
long long int szybkapot(long long int n, long long int w)
{

    if(w==0) return 1;
    if(w==1) return n;
    long long int b=szybkapot(n,w/2);
    long long int a=szybkapot(n,(w-1)/2);
    if(w%2==0)
        return b*b;
    else
        return n*a*a;
}
int pot(int n,int w)
{
    int wynik=1;
    while(w>0)
    {
        if(w%2==1)
        {
            wynik=wynik*n;
        }
      n=n*n;
      w=w/2;
    }
    return wynik;
}
int main()
{
    cout<<szybkapot(2,0)<<endl;
    cout<<szybkapot(2,0)<<endl;
    return 0;
}
