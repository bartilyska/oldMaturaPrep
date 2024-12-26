#include <iostream>
using namespace std;

int main()
{
    int n;
   cin>>n;
   char tab[n][n];
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
            {
                cin>>tab[i][j];
            }
   }
   for(int i=0;i<n;i++)
   {
        for(int j=0;j<n;j++)
            {
               cout<<tab[i][j];
            }
            cout<<endl;
   }
   if(tab[1][0]=='#' || tab[0][1]=='#')
    cout<<"BRAK";
    int maxdroga;
    int k=0,l=1,droga1=0,droga2;
   while(tab[k][l]=='.' && l<n)
   {
       l++;
       droga1++;
   }
   while(tab[k][l]=='.' && k<n)
   {
       k++;
       droga1++;
   }
   if(maxdroga<droga1)
    maxdroga=droga1;
   while(tab[k][l]=='.' && l<n &&tab[k+1][l+1]=='#')
   {
       l++;
       droga2++;
   }
   cout<<droga1<<endl;
    return 0;
}
