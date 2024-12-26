#include <iostream>

using namespace std;

int main()
{
    int tab[100];
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int n;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>tab[i];
       }
       for(int j=1;j<n;j=j+2)
       {
           cout<<tab[j]<<" ";
       }
       for(int j=0;j<n;j=j+2)
       {
           cout<<tab[j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}
