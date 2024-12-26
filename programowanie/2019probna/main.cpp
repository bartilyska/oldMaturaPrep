#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream pierwszy("pierwsze.txt");
    ifstream liczba("liczby.txt");
    int z,x,k=0,n=0,pierwsze[200],liczby[300],q=2,b,pomoc;
    bool ok;
    while(liczba>>x) liczby[n++]=x;
    while(pierwszy>>z) pierwsze[k++]=z;

    for(int i=1;i<=300;i++)
    {
        while(liczby[i]%q!=0 && q<=liczby[i])
        q++;
        if(q*q>liczby[i] && liczby[i]>=100 && liczby[i]<=5000)
        {
            cout<<liczby[i]<<endl;
        }
        q=2;
    }
    cout<<endl<<endl;
int licznik=0;
   for(int i=1;i<=200;i++)
   {
       int akumulator=0;
       while(pierwsze[i]>0)
       {
      int c=pierwsze[i]%10;
        akumulator+=c;
      pierwsze[i]/10;
       }
      if(akumulator==1) licznik++;
      while(akumulator>=10)
      {
        int c=akumulator%10;
        pomoc+=c;
        akumulator/10;
      }
      if(pomoc==1) licznik++;
      while(pomoc>=10)
      {
        int c=b%10;
        b+=c;
        b/10;
      }
      if(b==1) licznik++;
   }
    cout<<licznik<<endl;


    return 0;
}
