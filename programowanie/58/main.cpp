#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

    int zsystemu(string s,int b)
    {
        int znak=1,i=0,wynik=0;
        if(s[0]=='-')
        {
            znak=-1;
            i=1;
        }
        int d=s.length();
        for(i;i<d;i++)
        {
            wynik=wynik*b+(s[i]-'0');
        }
        return znak*wynik;
    }
    string nasystem (int l, int b)
    {
        string s="";
        char z;
        int znak=1;
        if (l<0)
        {
        znak=-1;
        l=-l;
        }
        if(!l) return "0";
        while (l>0)
        {
            z='0'+l%b;
            s=z+s;
            l=l/b;
        }
        if (znak<0) s='-'+s;
        return s;
    }
int main()
{
    int s1godz [1095];
    int s2godz [1095];
    int s3godz [1095];
    int s1temp [1095];
    int s2temp [1095];
    int s3temp [1095];
    ifstream plik1("dane_systemy1.txt");
    ifstream plik2("dane_systemy2.txt");
    ifstream plik3("dane_systemy3.txt");
    string g,t;
    for (int i=0;i<1095;i++)
    {
        plik1>>g>>t;
        s1godz[i]=zsystemu(g,2);
        s1temp[i]=zsystemu(t,2);
        plik2>>g>>t;
        s2godz[i]=zsystemu(g,4);
        s2temp[i]=zsystemu(t,4);
        plik3>>g>>t;
        s3godz[i]=zsystemu(g,8);
        s3temp[i]=zsystemu(t,8);
    }
    //zad1
    int mini1=100,mini2=100,mini3=100;
    for(int i=0;i<1095;i++)
    {

        if(s1temp[i]<mini1) mini1=s1temp[i];
        if(s2temp[i]<mini2) mini2=s2temp[i];
        if(s3temp[i]<mini3) mini3=s3temp[i];
    }
    cout<<nasystem(mini1,2)<<" "<<nasystem(mini2,2)<< " "<<nasystem(mini3,2)<<endl;
    //zad2
    int licznik=0,k;
    for(k=0;k<1095;k++)
    {

        if(s1godz[k]!=12+k*24 && s2godz[k]!=12+k*24 && s3godz[k]!=12+k*24)
        {
        licznik++;
        }
    }
    cout<<licznik<<endl;
    //zad3
    int rekord=0;
    int maxi1=-100,maxi2=-100,maxi3=-100;
    for (int i=0;i<1095;i++)
    {
        if (s1temp[i]>maxi1 || s2temp[i]>maxi2 || s3temp[i]>maxi3)
        {
            rekord++;
        }
        if(s1temp[i]>maxi1) maxi1=s1temp[i];
        if(s2temp[i]>maxi2) maxi2=s2temp[i];
        if(s3temp[i]>maxi3) maxi3=s3temp[i];

    }
    cout<<rekord<<endl;
    //zad4
    float maximum=0;
    for(int i=0;i<1094;i++)
    {
        for(int j=i+1;j<1095;j++)
        {
            float roznica_dni=abs(i-j);
            float roznica_temperatur=pow(s1temp[i]-s1temp[j],2);
            if(roznica_temperatur/roznica_dni>maximum)
                maximum=ceil(roznica_temperatur/roznica_dni);
        }
    }
    cout<<maximum<<endl;
    return 0;
}
