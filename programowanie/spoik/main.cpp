#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream plik("slowa.txt");
    ifstream plik1("przyklad.txt");
    const int n=50;
    string tab[n];
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<n;i++)
    {
        int licznikw=0,licznikk=0;
        for(int j=0;j<tab[i].length();j++)
        {
            if(tab[i][j]=='w')
                licznikw++;
            if(tab[i][j]=='k')
                licznikk++;
        }
        if(licznikk==licznikw)
            cout<<tab[i]<<endl;
    }
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        int w=0,a=0,k=0,c=0,o=0,e=0;
        for(int j=0;j<tab[i].length();j++)
        {
           if(tab[i][j]=='w')
                w++;
           if(tab[i][j]=='a')
                a++;
            if(tab[i][j]=='k')
                k++;
            if(tab[i][j]=='c')
                c++;
            if(tab[i][j]=='j')
                o++;
            if(tab[i][j]=='e')
                e++;
        }
        a=a/2;
        int odp=1000;
        if(w<odp) odp=w;
        if(a<odp) odp=a;
        if(k<odp) odp=k;
        if(c<odp) odp=c;
        if(o<odp) odp=o;
        if(e<odp) odp=e;
        cout<<odp<<endl;
    }
    cout<<endl<<endl<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        int czyw=0,czya1=0,czyk=0,czya2,czyc=0,czyj=0,czye=0;
        int usun=0;
        for(int o=0;o<tab[i].length();o++)
        {
            if(tab[i][o]=='w') czyw++;
            else if(tab[i][o]=='a' && czyw==1) czya1++;
            else if(tab[i][o]=='k' && czyw==1 && czya1==1)
                czyk++;
            else if(tab[i][o]=='a' && czyw==1 && czya1==1 && czyk==1)
                czya2++;
            else if(tab[i][o]=='c' && czyw==1 && czya1==1 && czyk==1 &&czya2==1)
                czyc++;
            else if(tab[i][o]=='j' && czyw==1 && czya1==1 && czyk==1 &&czya2==1 && czyc==1)
                czyj++;
            else if(tab[i][o]=='e' && czyw==1 && czya1==1 && czyk==1 &&czya2==1 && czyc==1 && czyj==1)
                czye++;
            else usun++;
            if(czyw>=1 &&czya1>=1 &&czyk>=1 && czya2>=1 &&czyc>=1,czyj>=1,czye>=1)
            {
                czyw=0,czya1=0,czyk=0,czya2,czyc=0,czyj=0,czye=0;
            }
        }
        cout<<usun<<endl;
    }
    return 0;
}
