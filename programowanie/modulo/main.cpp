#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
bool czypierwsza(int p)
{
    if(p==2) return true;
    if(p<2)  return false;
    if(p%2==0) return false;
    for(int i=3;i*i<=p;i=i+2)
    {
        if(p%i==0) return false;
    }
    return true;
}
 int nwd(int x,int y)
 {
     if(x==y) return x;
     while(x!=y)
    {
        if(x>y)
        x=x-y;
        else
        y=y-x;
    }
    return x;
 }
    float potega(int a, int x, int M)
{
int w = 1;
int z = a;
while(x>0)
{
if (x%2==1)
w = w*z%M;
z = z*z%M;
x = x/2;
}
return w;
}
int main()
{
   //wczyt
   int M,a,b,licznik=0,licz=0,zadanie=0;
   ifstream plik ("liczby.txt");
   for(int i=0;i<1000;i++)
   {
       plik>>M>>a>>b;
       //ile M jest pierwszych
       if(czypierwsza(M)==true) licznik++;
       //NWD M i a = 1
       if(nwd(M,a)==1) licz++;
       //a^x mod M=b kiedy x z <0,M-1> (naturalny)
       float x=potega(a,b,M);
       if(potega(a,x,M)==b)
        zadanie++;
   }
    cout<<licznik<<endl;
    cout<<licz<<endl;
    cout<<zadanie<<endl;
    return 0;
}
