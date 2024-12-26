#include <iostream>
#include <fstream>
using namespace std;
bool czysilnieodporny(string n)
{
    int dl=n.length();
    for(int i=0;i*2<dl;i++)
    {
        if(n[i]!=n[dl-i-1])
            return false;
    }
    return true;
}
bool czyodporny(string n)
{
    int genstart=0;
    string czesckodujaca="";
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='A' && n[i+1]=='A') genstart=1;
        if(genstart==1) czesckodujaca=czesckodujaca+n[i];
        if(n[i]=='B' && n[i-1]=='B' && genstart==1)
        {
            genstart=0;
        }
    }
    string zprawej="";
    genstart=0;
    for(int i=n.length()-1;i>=0;i--)
    {
        if(n[i]=='A' && n[i-1]=='A') genstart=1;
        if(genstart==1) zprawej=zprawej+n[i];
        if(n[i]=='B' && n[i+1]=='B' && genstart==1)
        {
            genstart=0;
        }
    }
    if(zprawej==czesckodujaca) return true;
    else return false;
}
int dlugoscgenu(string n)
{
    int wynik=0;
    int genstart=0;
    string gen="";
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='A' && n[i+1]=='A') genstart=1;
        if(genstart==1) gen=gen+n[i];
        if(n[i]=='B' && n[i-1]=='B' && genstart==1)
        {
            if(gen.length()>wynik)
                wynik=gen.length();
            genstart=0;
            gen="";
        }
    }
    return wynik;
}
int liczbagenow(string n)
{
    int wynik=0;
    int genstart=0;
    string gen="";
    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='A' && n[i+1]=='A') genstart=1;
        if(genstart==1) gen=gen+n[i];
        if(n[i]=='B' && n[i-1]=='B' && genstart==1)
        {
            wynik++;
            genstart=0;
            gen="";
        }
    }
    return wynik;
}
bool mutacja (string n)
{
    int dl=n.length();
    int genstart=0;
    string gen="";
    for(int i=0;i<dl;i++)
    {
        if(n[i]=='A' && n[i+1]=='A') genstart=1;
        if(genstart==1) gen=gen+n[i];
        if(n[i]=='B' && n[i-1]=='B') genstart=0;
        if(genstart==0 && gen!="")
        {
            for(int j=0;j<gen.length();j++)
            {
                if(gen[j]=='B' && gen[j+1]=='C' && gen[j+2]=='D' && gen[j+3]=='D' && gen[j+4]=='C' )
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    string tab[1000];
    int gatunek[501];
    int licznik=0;
    ifstream plik("dane_geny.txt");
    for(int i=0;i<1000;i++)
    {
        plik>>tab[i];
    }
    for(int i=0;i<1000;i++)
    {
        gatunek[tab[i].length()]++;
    }
    int maxi=0;
    for(int i=0;i<500;i++)
    {
        if(gatunek[i]>0) licznik++;
        if(gatunek[i]>maxi) maxi=gatunek[i];

    }
    cout<<licznik<<endl;
    cout<<maxi<<endl;
    int licz=0;
    for(int i=0;i<1000;i++)
    {
        if (mutacja(tab[i])) licz++;
    }
    cout<<licz<<endl;
    int maxgen=0;
    int maxdl=0;
    for(int i=0;i<1000;i++)
    {
        if(liczbagenow(tab[i])>maxgen)
            maxgen=liczbagenow(tab[i]);
        if(dlugoscgenu(tab[i])>maxdl)
            maxdl=dlugoscgenu(tab[i]);
    }
    cout<<maxgen<<" "<<maxdl<<endl;
    int odporne=0,silnieodporne=0;
    for(int i=0;i<1000;i++)
    {
        if(czyodporny(tab[i]))
        odporne++;
        if(czysilnieodporny(tab[i]))
        silnieodporne++;
    }
    cout<<odporne<<" "<<silnieodporne<<endl;
    return 0;
}
