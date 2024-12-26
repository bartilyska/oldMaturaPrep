#include <iostream>
#include <fstream>
using namespace std;
string nadowolny(int k,int system)
{
    if(k==0) return "0";
    string odp="";
    while(k>0)
    {
        char x=k%system+'0';
        if(x>'9')
        {
            if(x=='9'+1) x='A';
            if(x=='9'+2) x='B';
            if(x=='9'+3) x='C';
            if(x=='9'+4) x='D';
            if(x=='9'+5) x='E';
            if(x=='9'+6) x='F';
        }
        odp=x+odp;
        k=k/system;
    }
    return odp;
}
bool czypalindrom(string s)
{
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
            return false;
    }
    return true;
}
int main()
{
    int n=2246;
    ifstream plik("dane.txt");
    int t[n];
    for(int i=0;i<n;i++)
    {
        plik>>t[i];
    }
    int zad1=0,zad2=0;
    for(int i=0;i<n;i++)
    {
        if(czypalindrom(nadowolny(t[i],2)))
            zad1++;
        if(czypalindrom(nadowolny(t[i],16)))
            zad2++;
    }
    cout<<"zad1 "<<zad1<<endl;
    cout<<"zad2 "<<zad2<<endl;
    for(int j=2;j<=16;j++)
    {
        int odp=0;
       for(int i=0;i<n;i++)
        {
            if(czypalindrom(nadowolny(t[i],j)))
                odp++;
        }
        cout<<"system "<<j<<" "<<odp<<endl;
    }
    int max1,max2,max3;
    int pal1=-1,pal2=-1,pal3=-1;
    for(int i=0;i<n;i++)
    {
        int liczbapalindromow=0;
        for(int j=2;j<=16;j++)
        {
            if(czypalindrom(nadowolny(t[i],j)))
                liczbapalindromow++;
        }
        if(liczbapalindromow>=pal1)
        {
            max3=max2;
            pal3=pal2;
            max2=max1;
            pal2=pal1;
            pal1=liczbapalindromow;
            max1=t[i];
        }
        else if(liczbapalindromow>=pal2)
        {
            max3=max2;
            pal3=pal2;
            pal2=liczbapalindromow;
            max2=t[i];
        }
        else if(liczbapalindromow>pal3)
        {
            pal3=liczbapalindromow;
            max3=t[i];
        }
    }
    cout<<max1<<" "<<pal1<<" systemy ";
    for(int j=2;j<=16;j++)
    {
        if(czypalindrom(nadowolny(max1,j)))
        {
            cout<<j<<" ";
        }
    }
    cout<<endl;
    cout<<max2<<" "<<pal2<<" system ";
    for(int j=2;j<=16;j++)
    {
        if(czypalindrom(nadowolny(max2,j)))
        {
            cout<<j<<" ";
        }
    }
    cout<<endl;
    cout<<max3<<" "<<pal3<<" system " ;
    for(int j=2;j<=16;j++)
    {
        if(czypalindrom(nadowolny(max3,j)))
        {
            cout<<j<<" ";
        }
    }
    cout<<endl;
    return 0;
}
