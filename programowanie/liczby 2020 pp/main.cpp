#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    fstream wczyt,zapis;
    int liczba[1000],nr_liczby=1;
    wczyt.open("liczby.txt", ios::in);
    while(wczyt>>liczba[1000])
    {
        nr_liczby++;
    }
    wczyt.close();

   for(int i=1;i<=1000;i++)
   {
       if(liczba[i]>=4000 && liczba[i]<=5000)
       {
           for(int p=2;p<liczba[i];p++)
           {
               if(liczba[i]%p==0)
            continue;
           }
           cout<<liczba[i]<<endl;
       }
   }

    return 0;
}
