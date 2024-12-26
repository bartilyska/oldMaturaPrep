#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
bool czypalindrom(string x)
{
    for(int i=0;i<x.length()/2;i++)
    {
        if(x[i]!=x[x.length()-1-i])
            return false;
    }
    return true;
}
int zamiana(char c)
{
    int x=c-'A'+10;
    return x;
}
int main()
{
    ifstream plik("identyfikator.txt");
    ifstream plik1("identyfikator_przyklad.txt");
    ofstream out("wyniki4.txt");
    const int n=200;
    string tab[n];
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    int maxi=-1;
    vector <string> kody;
    for(int i=0;i<n;i++)
    {
        int suma=0;
        for(int j=3;j<tab[i].length();j++)
        {
            suma+=(int)(tab[i][j]-'0');
        }
        if(suma==maxi)
        {
            kody.push_back(tab[i]);
        }
        if(suma>maxi)
        {
            maxi=suma;
            kody.clear();
            kody.push_back(tab[i]);
        }
    }
    //cout<<maxi<<endl;
    out<<"ZADANIE 1"<<endl;
    for(int i=0;i<kody.size();i++)
    {

        out<<kody[i]<<endl;
    }
    out<<"ZADANIE 2"<<endl;
    for(int i=0;i<n;i++)
    {
        if(czypalindrom(tab[i].substr(0,3)) || czypalindrom(tab[i].substr(3,tab[i].length()-1)))
        out<<tab[i]<<endl;
    }
    out<<"ZADANIE 3"<<endl;
    for(int i=0;i<n;i++)
    {
        int wartosc=zamiana(tab[i][0])*7+zamiana(tab[i][1])*3+zamiana(tab[i][2])+
        (tab[i][4]-'0')*7+(tab[i][5]-'0')*3+(tab[i][6]-'0')*1+(tab[i][7]-'0')*7+(tab[i][8]-'0')*3;
        if(wartosc%10!=(tab[i][3]-'0'))
            out<<tab[i]<<endl;
    }
    return 0;
}
