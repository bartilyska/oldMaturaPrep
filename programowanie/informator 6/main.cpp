#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int odp[11]={};
   ifstream plik("dane6.txt");
   ofstream zapis("odp6.txt");
   const int n=2023;
   string tab[n];
   const int dl=100;
   for(int i=0;i<n;i++)
   {
       plik>>tab[i];
   }
   for(int i=0;i<n;i++)
   {
       int maxi=0;
       for(int j=0;j<dl;j++)
       {
           int t=tab[i][j]-'0'; //-'0' zeby zamienilo na inty
           if(maxi<t)
           {
               maxi=t;
           }
       }
       odp[maxi+1]++;
   }
   for(int i=2;i<=10;i++)
   {
       zapis<<i<<" "<<odp[i]<<endl;
   }
    return 0;
}
