#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    ifstream plik ("dane4.txt");
    int t[1000],najwieksza=0,najmniejsza=1e11,obecna;
    for(int i=0;i<1000;i++)
    {
        plik>>t[i];
    }
    for(int i=0;i<1000;i++)
    {
        obecna=abs(t[i]-t[i+1]);
        if(obecna>najwieksza)
        {
            najwieksza=obecna;
        }
        else if(obecna<najmniejsza)
        {
            najmniejsza=obecna;
        }
    }
    cout<<"Najwieksza :"<<najwieksza<<" "<<"Najmniejsza :"<<najmniejsza<<endl<<endl;

    int dlugosc_ciagu=0, najdluzszy_ciag=0,start,koniec;
    for(int i=0;i<1000;i++)
    {
        if(abs(t[i]-t[i+1])==abs(t[i+1]-t[i+2]))
        {
            start=t[i];
            dlugosc_ciagu++;
            if(dlugosc_ciagu>najdluzszy_ciag)
            {
                najdluzszy_ciag=dlugosc_ciagu;
                koniec=t[i];
                start=t[i-najdluzszy_ciag];
            }
        }
        else{
            dlugosc_ciagu=0;
        }
    }
    cout<<"Dlugosc :"<<najdluzszy_ciag<<" Start :"<<start<<" Koniec :"<<koniec<<endl<<endl;



    return 0;
}
