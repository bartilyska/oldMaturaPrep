#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik;
    int tab[1000];
    int najwieksza=0,pocz,koniec;
    plik.open("dane1_3.txt");
    for(int i=0;i<1000;i++)
    {
        plik>>tab[i];
    }
    for(koniec=1000;koniec>=1;koniec--)
{
        for(pocz=0;pocz<=1000-koniec;pocz++)
    {
        int suma=0;
        for(int k=0;k<koniec;k++)
        {
        suma+=tab[k+pocz];
        }
        if(suma>najwieksza)
        najwieksza=suma;

    }
}
    cout<<najwieksza<<endl;
    return 0;
}

