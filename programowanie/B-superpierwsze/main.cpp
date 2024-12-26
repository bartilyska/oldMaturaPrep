#include <iostream>

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
int sumacyfr(int n,int podstawa)
{
    int wynik=0;
    while(n>0)
    {
        int help=n%podstawa;
        wynik+=help;
        n=n/podstawa;
    }
    return wynik;
}
int main()
{
   for(int i=1;i<100000;i++)
   {
       if(czypierwsza(i) && czypierwsza(sumacyfr(i,2)) &&
          czypierwsza(sumacyfr(i,10)))
            cout<<i<<" "<<sumacyfr(i,2)<<endl;
   }
    return 0;
}
