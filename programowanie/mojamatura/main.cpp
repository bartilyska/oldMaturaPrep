#include <iostream>
#include <fstream>
using namespace std;
int na10(string p)
{
    int wynik=0;
    for(int i=0;i<p.length();i++)
    {
        wynik=wynik*2+(p[i]-'0');
    }
    return wynik;
}
string nabin(int k)
{
    string wynik="";
    while(k>=1)
    {
        char help=k%2+'0';
        wynik=help+wynik;
        k=k/2;
    }
    return wynik;
}
int main()
{
    const int n=100;
    ifstream plik("bin.txt");
    ifstream plik1("bin_przyklad.txt");
    string tab[n];
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
        string a=tab[i];
        string b=nabin(na10(tab[i])/2);
        b='0'+b;
        //cout<<a<<" "<<b<<endl;
        string odp="";
        for(int j=0;j<a.length();j++)
        {
            if(b[j]!=a[j])
                odp=odp+"1";
            else odp=odp+"0";
        }
        cout<<odp<<endl;
    }
    return 0;
}
