#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("dane6.txt");
    ofstream zapis("odp6.2.txt");
    const int n=2023;
    string tab[n];
    const int dl=100;
    int najw_suma[11];
    int suma;
    string najw_liczba[11];
    for(int i=0;i<n;i++)
    {
       plik>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
       int maxi=0;
       suma=0;
       for(int j=0;j<dl;j++)
       {
           int t=tab[i][j]-'0'; //-'0' zeby zamienilo na inty
           suma+=t;
           if(maxi<t)
           {
               maxi=t;
           }
       }
       if(najw_suma[maxi+1]<suma){
       najw_suma[maxi+1]=suma;
       najw_liczba[maxi+1]=tab[i];
       }

    }
    for(int i=2;i<=10;i++)
    {
       zapis<<i<<" "<<najw_liczba[i]<<endl;
    }
    return 0;
}
