#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("szyfrogram.txt");
    ofstream zapis("odp7_1.txt");
    int tab[26]={};
    char c;
    while(plik>>c)
    {
        tab[c-'A']++;
    }
    for(char i='A';i<='Z';i++)
    {
        zapis<<i<<" "<<tab[i-'A']<<endl;
    }
    return 0;
}
