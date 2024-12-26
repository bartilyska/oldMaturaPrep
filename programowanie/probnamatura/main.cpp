#include <iostream>
#include <fstream>
using namespace std;
string szyfr(string s,string klucz)
{
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        s[i]=s[i]+(klucz[j]-'0');
        if(s[i]>'Z')
            s[i]=s[i]-26;
        j++;
        if(j>=klucz.length())
            j=0;
    }
    return s;
}
string odszyfr(string s,string klucz)
{
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        s[i]=s[i]-(klucz[j]-'0');
        if(s[i]<'A')
            s[i]=s[i]+26;
        j++;
        if(j>=klucz.length())
            j=0;
    }
    return s;
}
int main()
{
    string klucz,napis[50];
    int n,znak[50];
    ifstream plik("dane.txt");
    plik>>klucz;
    plik>>n;
    for(int i=0;i<n;i++)
    {
        plik>>znak[i]>>napis[i];
    }
    for(int i=0;i<n;i++)
    {
        if(znak[i]==0)
        {
            napis[i]=szyfr(napis[i],klucz);
        }
        if(znak[i]==1)
        {
            napis[i]=odszyfr(napis[i],klucz);
        }
    }
    for(int i=0;i<n;i++)
    {
        if (znak[i]==0) znak[i]=1;
        else if (znak[i]==1) znak[i]=0;
    }
    cout<<klucz<<endl;
    cout<<n<<endl;
    int licznik=0;
    for(int i=0;i<n;i++)
    {
        if(i==22)
        cout<<znak[i]<<" "<<napis[i]<<endl;
        if(znak[i]==1) licznik++;
    }
    //cout<<licznik<<endl;
    return 0;
}
