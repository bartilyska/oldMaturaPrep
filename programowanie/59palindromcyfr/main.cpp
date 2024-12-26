#include <iostream>
#include <fstream>
using namespace std;
int odwroc(int n)
{
    int wynik=0;
    while(n>=1)
    {
        int cyfra=n%10;
        n=n/10;
        wynik=10*wynik+cyfra;
    }
}
int main()
{
    const int N=1000;
    int tab[N];
    ifstream plik("liczby.txt");
    for(int i=0;i<N;i++)
    {
        plik>>tab[i];
    }
    int odp=0;
    for(int i=0;i<N;i++)
    {
        int odwrocona=odwroc(tab[i]);
        int suma=odwrocona+tab[i];
        if(suma==odwroc(suma)) odp++;
    }
    cout<<odp<<endl;
    return 0;
}
