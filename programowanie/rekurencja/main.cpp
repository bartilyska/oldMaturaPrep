#include <iostream>
#include <fstream>
using namespace std;
long long int liczydlo(long long int n)
{
    if(n<10) return n;
    else return ((n%10)+liczydlo(n/10));
}
int main()
{
    int n=100;
    long long int t[n];
    ifstream plik("liczby.txt");
    for(int i=0;i<n;i++)
    {
        plik>>t[i];
    }
    int tab[10]={};
    for(int i=0;i<n;i++)
    {
      int rzad=0;
      while(t[i]>=10)
      {
          t[i]=liczydlo(t[i]);
          rzad++;
      }
      if(rzad==3)
        tab[t[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<" "<<tab[i]<<endl;
    }
    plik.close();
    return 0;
}
