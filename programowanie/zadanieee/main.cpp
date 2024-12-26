#include <iostream>
#include <fstream>
using namespace std;
int piksele[6400];
int i=0;
int prawa=0;
int lewa=320;
int licznik=0;
int p=0,l=359;
int main()
{
    ifstream plik ("dane.txt");
    while(plik>>piksele[i]) i++;
    plik.close();
    for(int n=0;n<200;n++)
    {
    while(prawa=!lewa)
    {
        if(piksele[p]==piksele[l])
        {
            licznik++;
        }
        p++;
        l--;
        prawa++;
        lewa--;
    }
    p+=360;
    l+=360;
    }
    cout<<licznik<<endl;
    return 0;
}
