#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
string dw(int n,int pod)
{
    string odp="";
    while(n>=1)
    {
    int help=n%pod;
    odp=char(help+'0')+odp;
    n=n/pod;
    }
    return odp;
}
int na10(string k,int p)
{
    int odp=0;
    for(int i=0;i<k.length();i++)
    {
      odp=odp*p+(k[i]-'0');
    }
    return odp;
}
int szybka(int n,int p,int m)
{

    if(p%2==0)
       {
        int k=szybka(n,p/2,m);
        return (k*k) % m;
       }
    else
      {
         int k=szybka(n,(p-1)/2,m);
        return (k*k*n)%m;
      }
}
int main()
{
   /*int n,pod;
   cin>>n>>pod;
   cout<<dw(n,pod)<<endl;
   string k;
   int w;
   cin>>k>>w;
   cout<<na10(k,w)<<endl;*/
   int n,p,m;
   cin>>n>>p>>m;
   cout<<szybka(n,p,m)<<endl;
    return 0;
}
