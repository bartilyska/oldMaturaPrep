#include <iostream>
#include <fstream>
using namespace std;
int fib(int ilosc)
{
    if(ilosc==1) return 1;
    if(ilosc==2) return 1;
    if(ilosc>2) return fib(ilosc-1)+fib(ilosc-2);
}
bool czypierwsza(int p)
{
    if(p<2) return false;
    if(p==2) return true;
    if(p%2==0) return false;
    for(int i=3;i*i<=p;i=i+2)
    {
        if(p%i==0) return false;
    }
    return true;
}
string z10 (int n)
{
    string wynik="";
    while(n>=1)
    {
    char znak=n%2+48;
    wynik=znak+wynik;
    n=n/2;
    }
    return wynik;
}
bool ma6jedynek(string napis)
{
    int jedynki=6;
    for(int i=0;i<napis.length();i++)
    {
    if(napis[i]=='1')
        {
            jedynki--;
        }
    }
    if(jedynki==0) return true;
    else return false;
}
int main()
{
    ofstream plik("fibonacci.txt");
    cout<<fib(10)<<" "<<fib(20)<<" "<<fib(30)<<" "<<fib(40)<<endl;
    for(int i=1;i<=40;i++)
    {
        if(czypierwsza(fib(i)))
            cout<<fib(i)<<endl;
    }
    int dlugosc=z10(fib(40)).length();
    for(int i=1;i<=40;i++)
    {

        string zapis=z10(fib(i));
        while(dlugosc>zapis.length())
        {
            zapis='0'+zapis;
        }
        plik<<zapis<<endl;
        if(ma6jedynek(zapis))
            cout<<zapis<<endl;
    }

    return 0;
}
