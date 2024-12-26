#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int pocz, koniec,mini=10000,mini2=10000;
    ifstream plik("dane3.txt");
    ofstream zapis("odp3_1.txt");
    for(int i=0;i<2023;i++)
    {
        plik>>pocz>>koniec;
        int dl=koniec-pocz+1;
        if(dl<mini)
        {
            mini2=mini;
            mini=dl;
        }
        else if(dl<mini2)
        {
            mini2=dl;
        }
    }
    zapis<<"zad1: "<<mini<<" "<<mini2<<endl;

    return 0;
}
