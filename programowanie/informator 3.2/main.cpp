#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("dane3.txt");
    ofstream zapis("wyniki3_2.txt");
    const int n=4040;
    int tab[n]={}; // wypelnianie zerami!!!!
    int pocz,koniec,naj_dl=0,il_wystapien=0;
    while(plik>>pocz>>koniec)
    {
        tab[koniec-pocz+1]++;
    }
    for(int i=0;i<n;i++)
    {
        if(il_wystapien<=tab[i])
            {
                naj_dl=i;
                il_wystapien=tab[i];
            }
    }
    zapis<<naj_dl<<endl;
    return 0;
}
