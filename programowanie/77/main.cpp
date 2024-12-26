#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
string funkcja(string napis,string klucz)
{
    int dl=napis.length();
    int x=klucz.length();
    int j=0;
    for(int i=0;i<dl;i++)
    {
        if(napis[i]>='A' && napis[i]<='Z')
        {
            napis[i]=napis[i]+klucz[j]-'A';
            if(napis[i]>'Z')
            {
                napis[i]=napis[i]-26;
            }
            j++;
            if(j>x-1)
            j=0;
        }
    }
    return napis;
}
int f(string napis,string klucz)
{
    int dl=napis.length();
    int x=klucz.length();
    int j=0,odp=1;
    for(int i=0;i<dl;i++)
    {
        if(napis[i]>='A' && napis[i]<='Z')
        {
            napis[i]=napis[i]+klucz[j]-'A';
            if(napis[i]>'Z')
            {
                napis[i]=napis[i]-26;
            }
            j++;
            if(j>x-1)
            {
                j=0;
                odp++;
            }
        }
    }
    return odp;
}
string odszyfr(string napis,string klucz)
{
    int dl=napis.length();
    int x=klucz.length();
    int j=0;
    for(int i=0;i<dl;i++)
    {
        if(napis[i]>='A' && napis[i]<='Z')
        {
            napis[i]=napis[i]-(klucz[j]-'A');
            if(napis[i]<'A')
            {
                napis[i]=napis[i]+26;
            }
            j++;
            if(j>x-1)
            j=0;
        }
    }
    return napis;
}
int liczbaliter(string s)
{
    int licznik=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            licznik++;
        }
    }
    return licznik;
}
int main()
{
    string napis;
    ifstream plik("dokad.txt");
    ifstream pliczek("szyfr.txt");
    getline(plik,napis);
    string klucz="LUBIMYCZYTAC";
    int dl=napis.length();
    cout<<funkcja(napis,klucz)<<endl;
    cout<<f(napis,klucz)<<endl;
    string zaszyfrowany,kluczyk;
    getline(pliczek,zaszyfrowany);
    getline(pliczek,kluczyk);
    cout<<odszyfr(zaszyfrowany,kluczyk)<<endl;
    int tab[200]={0};
    for(int i=0;i<zaszyfrowany.length();i++)
    {
        tab[zaszyfrowany[i]]++;
    }
    int K=0;
    for(int i='A';i<='Z';i++)
    {
        cout<<char(i)<<" "<<tab[i]<<endl;
        K=K+tab[i]*(tab[i]-1);
    }
    int dlugosc=liczbaliter(zaszyfrowany)*(liczbaliter(zaszyfrowany)-1);
    double wyr=double(K)/double(dlugosc);
    cout<<wyr<<endl;
    double d=0.0285/(wyr-0.0385);
    cout<<setprecision(4)<<d<<endl;
    cout<<kluczyk.length()<<endl;
    return 0;
}
