#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("szyfrogram.txt");
    ifstream dane("czestosc.txt");
    ifstream help("odp7_1.txt");
    ofstream zapis("odp7_3.txt");
    char litera;
    char znak[26];
    int ilosc[26];
    char szyfr[26];
    int ilosc_szyfr[26];
    for(int i=0;i<=26;i++)
    {
        dane>>znak[i]>>ilosc[i];
    }
    dane.close();
    for(int i=0;i<=26;i++)
    {
        help>>szyfr[i]>>ilosc_szyfr[i];
    }
    help.close();
    while(plik>>litera)
    {
        int pomoc=0;
        for(int i=0;i<=26;i++)
        {
            if(litera==szyfr[i])
            {
                pomoc=ilosc_szyfr[i];
            }
        }
        for(int i=0;i<=26;i++)
        {
            if(pomoc==ilosc[i])
            {
                litera=znak[i];
            }
        }
        cout<<litera;
    }
    plik.close();

    return 0;
}
