#include <iostream>
#include <fstream>
using namespace std;
bool czypalindrom(string n)
{
    for(int i=0;i<n.length()/2;i++)
    {
        if(n[i]!=n[n.length()-1-i])
            return false;
    }
    return true;
}
int main()
{
    ifstream plik("napisy.txt");
    ifstream plik1("przyklad.txt");
    const int n=1000;
    string tab[n];
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    int zad1=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<tab[i].length();j++)
        {
            if(tab[i][j]>='0' && tab[i][j]<='9')
                zad1++;
        }
    }
    cout<<zad1<<endl;
    string odp="";
    int b=0;
    for(int i=19;i<n;i+=20)
    {
        odp+=tab[i][b];
        b++;
    }
    cout<<odp<<endl;
    string haslo="";
    for(int i=0;i<n;i++)
    {
        string x=tab[i]+tab[i][0];
        string y=tab[i][49]+tab[i];
        if(czypalindrom(x))
            haslo+=x[25];
            if(czypalindrom(y))
            haslo+=y[25];
    }
    cout<<haslo<<endl;
    string haselko="";
    for(int i=0;i<n;i++)
    {
        int para=0;
        int suma=0;
        for(int j=0;j<50;j++)
        {
            if(tab[i][j]>='0' && tab[i][j]<='9')
            {
                para++;
                if(para==1)
                suma+=(tab[i][j]-'0')*10;
                if(para==2)
                suma+=tab[i][j]-'0';
            }
            if(suma>=65 && suma<=90 && para==2)
            {
                haselko+=(char)(suma);
                suma=0;
                para=0;
            }
            if(haselko[haselko.length()-1]=='X' && haselko[haselko.length()-2]=='X' && haselko[haselko.length()-3]=='X')
                break;
        }
    }
    cout<<haselko<<endl;
    return 0;
}
