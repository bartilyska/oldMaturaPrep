#include <bits/stdc++.h>
#include <fstream>
using namespace std;
string f(string tab,int szyf[] )
{
    for(int i=0;i<tab.length();i++)
    {
        swap(tab[i],tab[szyf[i]-1]);
    }
    return tab;
}
string fu(string tab,int szyf[],int n )
{
    for(int i=0;i<tab.length();i++)
    {
        swap(tab[i],tab[szyf[i%n]-1]);
    }
    return tab;
}
string fun(string tab,int szyf[],int n)
{
    for(int i=tab.length()-1;i>=0;i--)
    {
        swap(tab[i],tab[szyf[i%n]-1]);
    }
    return tab;
}
int main()
{
    const int ile=6;
    ifstream plik("szyfr1.txt");
    ifstream pliczek("szyfr2.txt");
    ifstream plicz("szyfr3.txt");
    string tab[ile];
    string zad2;
    int szyfrek[15];
    int szyfr[50];
    for(int i=0;i<ile;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<50;i++)
    {
        plik>>szyfr[i];
    }
    pliczek>>zad2;
    for(int i=0;i<15;i++)
    {
        pliczek>>szyfrek[i];
    }
    for(int i=0;i<ile;i++)
    {
        cout<<f(tab[i],szyfr)<<endl;
    }
    //zad2

        cout<<fu(zad2,szyfrek,15)<<endl;
        //zad3
        string odp="";
    string zad3;
    plicz>>zad3;
    int t[6]={6, 2, 4, 1, 5, 3};
    cout<<fun(zad3,t,6)<<endl;
    return 0;
}
