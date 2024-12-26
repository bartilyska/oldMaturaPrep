#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int tab[1000],tab2[1000],licznik=0;
    ifstream plik("pary.txt");
    for(int i=0;i<1000;i++)
    {
        plik>>tab[i]>>tab2[i];
    }
    for(int i=0;i<1000;i++)
    {
        int a=tab[i],b=tab2[i];
        while(b>=a)
        {
            b=b/2;
            if(b==a)
            {
            cout<<tab[i]<<" "<<tab2[i]<<endl;
            break;
            }
        }
    }
    return 0;
}
