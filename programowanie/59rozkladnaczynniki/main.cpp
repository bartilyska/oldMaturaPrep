#include <iostream>
#include <fstream>
using namespace std;
bool funkcja(int n)
{
    if(n%2==0) return false;
    int czynnik=3,licznik=0;
    while(n>1)
    {
        if(n%czynnik==0)
        {
            licznik++;
            while(n%czynnik==0)
            {
                n=n/czynnik;
            }
        }
        czynnik=czynnik+2;
        if(licznik>3) return false;
    }
    if(licznik==3) return true;
    if(licznik<3) return false;
}
int main()
{
    int tab[1000];
    ifstream plik("liczby.txt");
    for(int i=0;i<=1000;i++)
    {
        plik>>tab[i];
    }
    int odp=0;
    for(int i=0;i<=1000;i++)
    {
        if(funkcja(tab[i])==true) odp++;
    }
    cout<<odp<<endl;
    return 0;
}
