#include <iostream>

using namespace std;

int main()
{
   int n;
   string s,wynik="";
   cin>>n;
   cin.ignore();
   getline(cin,s);
   char tab[n][n];
   int dl=s.length(),i=0,j,k;
   while(i<dl)
   {
       for(j=0;j<n && i<dl;j++)
       {
           for(k=0;k<n && i<dl;k++)
           {
               tab[j][k]=s[i];
               i++;
           }
       }
       if(i==dl &&(j<n || k<n))
       {
           for(j;j<n;j++)
           {
               for(k;k<n;k++)
               {
                   tab[j][k]='X';
                   k=0;
               }
           }
       }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
               wynik+=tab[k][j];
            }
        }
   }
   cout<<wynik;
    return 0;
}
