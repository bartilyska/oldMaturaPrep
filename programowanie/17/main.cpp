#include <iostream>
#include <fstream>
using namespace std;
int suma(string n)
{
    int suma=0;
    int tab[4]={1,3,7,9};
    for(int i=0;i<10;i++)
    {
        suma=suma+((int)(n[i]-'0')*tab[i%4])%10;
    }
    return suma;
}
int main()
{
    const int n=200;
   ifstream plik("pesel.txt");
   string tab[n];
   for(int i=0;i<200;i++)
   {
       plik>>tab[i];
   }
   int kobieta=0,mezczyzna=0;
   for(int i=0;i<n;i++)
   {
       if((int)(tab[i][9]-'0')%2==0)
        kobieta++;
       else mezczyzna++;
   }
   cout<<"k:  "<<kobieta<< "m;  "<<mezczyzna<<endl;
   for(int i=0;i<n;i++)
   {
       int liczba=0;
       liczba=10-(suma(tab[i])%10);
        if(liczba!=(int)tab[i][10]-'0')
            cout<<tab[i]<<endl;
   }
   int do18=0,ponad18=0,ponad50=0,ponad100=0;
   for(int i=0;i<n;i++)
   {
       int rok=(int)(tab[i][0]-'0')*10+(int)(tab[i][1]-'0');
       int d=(int)(tab[i][2]-'0')*10+(int)(tab[i][3]-'0');
       if(d>0 && d<=12) rok=rok+1900;
       if(d>80 && d<=92) rok=rok+1800;
       if(d>20 && d<=32) rok=rok+2000;

        if(2022-rok<=18)
        {
            do18++;
            continue;
        }
        if(2022-rok<=50)
        {
            ponad18++;
            continue;
        }
        if(2022-rok<=100)
        {
            ponad50++;
            continue;
        }
        if(2022-rok>100)
        {
            ponad100++;
            continue;
        }
   }
   cout<<do18<<" "<<ponad18<<" "<<ponad50<<" "<<ponad100<<endl;
    return 0;
}
