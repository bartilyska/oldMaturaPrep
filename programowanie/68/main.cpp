#include <iostream>
#include <fstream>
using namespace std;
bool czyanagram(string n,string s)
{
    if(n.length()==s.length())
    {
        int tab1[200]={},tab2[200]={};
        for(int i=0;i<n.length();i++)
        {
            tab1[int(n[i])]++;
            tab2[int(s[i])]++;
        }
        for(int i=65;i<=90;i++)
        {
            if(tab1[i]!=tab2[i])
                return false;
        }
        return true;
    }
    return false;
}
int main()
{
    string slowo1,slowo2;
    string tab[2000];
    int licznik=0,licz=0;
    ifstream plik("dane_napisy.txt");
    for(int i=0;i<1000;i++)
    {
        plik>>slowo1;
        plik>>slowo2;
        tab[i]=slowo1;
        tab[i+1000]=slowo2;
        if(czyanagram(slowo1,slowo2)) licz++;
        if(slowo1.length()==slowo2.length())
        {
            int d=slowo1.length();
            bool ok=1;
            for(int j=0;j<d-1;j++)
            {
                if(slowo1[j]!=slowo1[j+1])
                    ok=0;
                if(slowo2[j]!=slowo2[j+1])
                    ok=0;
            }
            if (ok && slowo1[0]==slowo2[0])
            licznik++;

        }
    }
    cout<<licznik<<endl;
    cout<<licz<<endl;
    int maxi=0;
    for(int i=0;i<2000;i++)
    {
        int help=0;
        for(int j=0;j<2000;j++)
        {
            if(czyanagram(tab[i],tab[j])) help++;
        }
        if(help>maxi)
            maxi=help;
    }
    cout<<maxi<<endl;
    return 0;
}
