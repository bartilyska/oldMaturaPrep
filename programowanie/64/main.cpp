#include <iostream>
#include <fstream>
using namespace std;
int main()
{
   ifstream plik("dane_obrazki.txt");
    char tab[200][21][21];
   for(int i=0;i<200;i++)
   {
       for(int j=0;j<21;j++)
       {
           for(int k=0;k<21;k++)
           {
               if(j==20 && k==20) tab[i][j][k]=' ';
               else plik>>tab[i][j][k];
           }
       }
   }
   plik.close();
   //zad1
   int odp1=0,maxczarny=0;
    for(int i=0;i<200;i++)
   {
       int licznikczarny=0,licznikbialy=0;
       for(int j=0;j<20;j++)
       {
           for(int k=0;k<20;k++)
           {
               if(tab[i][j][k]=='1') licznikczarny++;
               else licznikbialy++;
           }
       }
       if(licznikczarny>maxczarny)
       {
           maxczarny=licznikczarny;
       }
       if(licznikczarny>licznikbialy) odp1++;
   }
   cout<<odp1<<endl;
   cout<<maxczarny<<endl;
   //zad2
   int rekurencyjne=0,bait,pierwszarek=1;
    for(int i=0;i<200;i++)
   { bool czygit=1;
       for(int j=0;j<10;j++)
       {
           for(int k=0;k<10;k++)
           {
               if(tab[i][j][k]==tab[i][j][k+10] && tab[i][j][k]==tab[i][j+10][k] &&
                   tab[i][j][k]==tab[i][j+10][k+10] && tab[i][j][k+10]==tab[i][j+10][k] &&
                   tab[i][j][k+10]==tab[i][j+10][k+10] && tab[i][j+10][k]==tab[i][j+10][k+10])
                   bait++;
                else
               {
                   czygit=0;
               }
           }
       }
       if(czygit)
       {
        rekurencyjne++;
        if(pierwszarek)
        {
            pierwszarek=0;
            for(int j=0;j<20;j++)
            {
                for(int k=0;k<20;k++)
                {
                    cout<<tab[i][j][k];
                }
                cout<<endl;
            }
        cout<<endl;
         }
        }
   }
    cout<<rekurencyjne<<endl;
    //zad3
    int poprawne=0,naprawialne=0,nienaprawialne=0;
    int bladpoziom[200]={0},bladpion[200]={0};
     for(int i=0;i<200;i++)
   {
       for(int j=0;j<20;j++)
       {
           int liczjedynkipoziom=0;
           for(int k=0;k<20;k++)
           {
               if(tab[i][j][k]=='1')liczjedynkipoziom++;
            }
    if(liczjedynkipoziom%2 != (int)(tab[i][j][20]-48)) bladpoziom[i]++;
       }
   }
   for(int i=0;i<200;i++)
   {
       for(int k=0;k<20;k++)
       {
           int liczjedynkipion=0;
           for(int j=0;j<20;j++)
           {
               if(tab[i][j][k]=='1')liczjedynkipion++;
            }
    if(liczjedynkipion%2 != (int)(tab[i][20][k]-48)) bladpion[i]++;
       }
   }
   int najwblad=0;
   for(int i=0;i<200;i++)
   {
       if(bladpion[i]==0 && bladpoziom[i]==0) poprawne++;
       else if(bladpion[i]==1 && bladpoziom[i]==0) naprawialne++;
       else if (bladpion[i]==0 && bladpoziom[i]==1) naprawialne++;
       else if(bladpion[i]==1 && bladpoziom[i]==1) naprawialne++;
       else nienaprawialne++;
       if(bladpion[i]+bladpoziom[i]>najwblad)
        najwblad=bladpion[i]+bladpoziom[i];
   }
   cout<<"poprawne: "<<poprawne<<endl;
   cout<<"naprawialne: "<<naprawialne<<endl;
   cout<<"nienaprawialne: "<<nienaprawialne<<endl;
   cout<<najwblad<<endl;
   //zadanie4
    for(int i=0;i<200;i++)
   {
       if(bladpion[i]==1 && bladpoziom[i]==0)
       {
           for(int k=0;k<20;k++)
       {
           int liczjedynkipion=0;
           for(int j=0;j<20;j++)
           {
               if(tab[i][j][k]=='1')liczjedynkipion++;
            }
    if(liczjedynkipion%2 != (int)(tab[i][20][k]-48))
        cout<<i+1<<" "<<21<<" "<<k+1<<endl;
       }
       }
   }
    for(int i=0;i<200;i++)
   {
       if (bladpion[i]==0 && bladpoziom[i]==1)
       {
        for(int j=0;j<20;j++)
       {
           int liczjedynkipoziom=0;
           for(int k=0;k<20;k++)
           {
               if(tab[i][j][k]=='1')liczjedynkipoziom++;
            }
    if(liczjedynkipoziom%2 != (int)(tab[i][j][20]-48)) cout<<i+1<<" "<<j+1<< " "<<21<<endl;
       }
       }
   }
    for(int i=0;i<200;i++)
   {
       if(bladpion[i]==1 && bladpoziom[i]==1)
       {
           cout<<i+1<<" ";
            for(int j=0;j<20;j++)
       {
           int liczjedynkipoziom=0;
           for(int k=0;k<20;k++)
           {
               if(tab[i][j][k]=='1')liczjedynkipoziom++;
        }
    if(liczjedynkipoziom%2 != (int)(tab[i][j][20]-48))
        cout<<j+1<<" ";
       }
            for(int k=0;k<20;k++)
       {
           int liczjedynkipion=0;
           for(int j=0;j<20;j++)
           {
               if(tab[i][j][k]=='1')liczjedynkipion++;
            }
    if(liczjedynkipion%2 != (int)(tab[i][20][k]-48))
        cout<<k+1<<endl;
       }
       }
   }
    return 0;
}
