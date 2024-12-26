#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int licznik_1=0,licznik_0=0;
    ifstream plik("liczby.txt");
    string liczba[1000];
    int i=0,x;
    while (plik >>liczba[i]) i++;
    for(int n=0;n<1000;n++)
    {
        x=liczba[n].length();
        for(int i=0;i<x;i++)
        {
            if(liczba[i]=="1")
                licznik_1++;
            else licznik_0++;
        }
    }
    return 0;
}
