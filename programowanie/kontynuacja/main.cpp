#include <bits/stdc++.h>

using namespace std;
int main()
{
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
         int n;
         cin>>n;
         long long int tab[n];
         for(int j=0;j<n;j++)
         {
             cin>>tab[j];
         }
         sort(tab,tab+n);
         int ile=n/2;
         int licznik=1;
         bool czyznaleziono=0;
         if(n==1)
         {
             cout<<tab[0]<<endl;
             czyznaleziono=1;
         }
         for(int j=0;j<n-1;j++)
         {
             if(tab[j]==tab[j+1])
             {
                 licznik++;
                 if(licznik>ile)
                 {
                     czyznaleziono=1;
                     cout<<tab[j]<<endl;
                     break;
                 }
             }
            else
            {
                 licznik=1;
            }
         }
         if(czyznaleziono==0)
            cout<<-1<<endl;
     }
    return 0;
}
