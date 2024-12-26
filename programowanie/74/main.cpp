#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
bool funkcja(string n)
{
    for(int j=0;j<n.length()-1;j++)
    {
        if((int)n[j]>57 || (int)n[j]<48)
            return false;
    }
    return true;
}
int main()
{
    string tab[200];
    ifstream plik ("hasla.txt");
    int licznik=0;
    for(int i=0;i<200;i++)
    {
        plik>>tab[i];
        if(funkcja(tab[i])) licznik++;
    }
    cout<<"74.1. "<<licznik<<endl;
    sort(tab,tab+200);
    cout<<"74.2. "<<endl;
    for(int i=0;i<200;i++)
    {
        for(int j=i+1;j<200;j++)
        {
            if(tab[i]==tab[j])
            {
                cout<<tab[i]<<endl;
            }
        }
    }
    char help[4];
    int odp=0;
    for(int i=0;i<200;i++)
    {
        if(tab[i].length()>=4)
        {
        for(int j=0;j<tab[i].length()-3;j++)
        {
            help[0]=tab[i][j];
            help[1]=tab[i][j+1];
            help[2]=tab[i][j+2];
            help[3]=tab[i][j+3];
            sort(help,help+4);
            if(help[0]==help[1]-1 && help[1]==help[2]-1 && help[2]==help[3]-1)
            {
                odp++;
                break;
            }
        }
        }
    }
    cout<<"74.3. "<<odp<<endl;
    int odpik=0;
    for(int i=0;i<200;i++)
    {
        int czycyfra=0,czymala=0,czyduza=0;
        for(int j=0;j<tab[i].length();j++)
        {
            if(tab[i][j]>=48 && tab[i][j]<=57) czycyfra++;
            if(tab[i][j]>=65 && tab[i][j]<=90) czyduza++;
            if(tab[i][j]>=97 && tab[i][j]<=122) czymala++;
        }
        if(czycyfra>=1 && czyduza>=1 && czymala>=1) odpik++;
    }
    cout<<"74.4. "<<odpik<<endl;
    return 0;
}
