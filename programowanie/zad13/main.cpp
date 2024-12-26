#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
string nadowolny(int n,int system)
{
    string wynik="";
    while(n>0)
    {
        char help=n%system+'0';
        if(help=='0'+10) help='A';
        if(help=='0'+11) help='B';
        if(help=='0'+12) help='C';
        if(help=='0'+13) help='D';
        if(help=='0'+14) help='E';
        if(help=='0'+15) help='F';
        wynik=help+wynik;
        n=n/system;
    }
    return wynik;
}
bool czypalindrom(string s)
{
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i]) return false;
    }
    return true;
}
int main()
{
    const int n=2000;
    int tab[n];
    ifstream plik("liczby13.txt");
    int zad1=0;
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
        int dl=nadowolny(tab[i],2).length();
        int licz1=0,licz0=0;
        for(int j=0;j<dl;j++)
        {
          if(nadowolny(tab[i],2)[j]=='1')licz1++;
          else licz0++;
        }
        if(licz1==licz0) zad1++;
    }
    cout<<zad1<<endl;
    int s=13;
    vector <int> pomoc;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        int licz=0;
        int dl=nadowolny(tab[i],s).length();
        for(int j=0;j<dl;j++)
        {
            if(nadowolny(tab[i],s)[j]=='C')
                licz++;
        }
        if(maxi==licz)
        {
            pomoc.push_back(tab[i]);
        }
        if(maxi<licz)
        {
            maxi=licz;
            pomoc.clear();
            pomoc.push_back(tab[i]);
        }
    }
    for(int i=0;i<pomoc.size();i++)
    {
        cout<<pomoc[i]<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        if(czypalindrom(nadowolny(tab[i],16)))
            cout<<tab[i]<<" "<<endl;
    }
    return 0;
}
