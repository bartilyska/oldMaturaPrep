#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   const int n=100000;
    int tab[n];
    long maks_suma;
    long naj_pocz=0;
    long naj_koniec=0;
    long suma_obecna;
    long pocz_obecny=0;
    ifstream plik;
    plik.open("dane1_4.txt");
    for(long i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    maks_suma=suma_obecna=tab[0];
    for(long i=1;i<n;i++)
    {
        if(suma_obecna>=0)
            suma_obecna+=tab[i];
        else
        {
            suma_obecna=tab[i];
            pocz_obecny=i;
        }
        if(maks_suma<suma_obecna)
        {
            maks_suma=suma_obecna;
            naj_pocz=pocz_obecny;
            naj_koniec=i;
        }

    }
    cout<<naj_pocz+1<<" "<<naj_koniec+1<<endl;
    return 0;
}
