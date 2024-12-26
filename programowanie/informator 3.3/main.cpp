#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
//nie zrobione
int main()
{
    const int n=2023;
    int pocz[n],koniec[n],obecna_dl[n],naj_dl=0,najm_pocz,najw_koniec;
   ifstream plik("dane3.txt");
   for(int i=0;i<n;i++)
   {
       plik>>pocz[i];
       plik>>koniec[i];
   }
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-1;j++)
       {
           if(pocz[j]>pocz[j+1])
            {
            swap(pocz[j],pocz[j+1]);
            swap(koniec[j],koniec[j+1]);
            }

       }
   }
   for(int i=0;i<n;i++)
   {
       obecna_dl=0;
       najm_pocz=pocz[i];
       najw_koniec=koniec[i];
       for(int j=i;j<n;j++)
       {

           if(najm_pocz>=pocz[j+1] && najw_koniec<=koniec[j+1])
            {
                obecna_dl[i]++;
                najm_pocz=pocz[j+1];
                najw_koniec=koniec[j+1];
            }

       }
   }

   cout<<naj_dl<<endl;
    return 0;
}
