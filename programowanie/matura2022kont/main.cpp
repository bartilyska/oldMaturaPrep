#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    int tab[200],tabl[200],tablica[200];
    ifstream plik("liczby.txt");
    ifstream pliczek("przyklad.txt");
    int maksdzielnik=0,maksliczba=0;
     for(int i=0;i<200;i++)
    {
        plik>>tab[i];
        tabl[i]=tab[i];
        tablica[i]=tab[i];
        int liczba=tab[i];
        int dzielnik=0;
        for(int j=2;j<=tab[i];j++)
        {
            while(tab[i]%j==0)
            {
                dzielnik++;
                tab[i]=tab[i]/j;
            }
        }
        if(dzielnik>maksdzielnik)
        {
            maksdzielnik=dzielnik;
            maksliczba=liczba;
        }
    }
    cout<<"4.2:"<<endl;
    cout<<maksliczba<<" "<<maksdzielnik<<endl;
    int maksdziel=0,makslicz=0;
    for(int i=0;i<200;i++)
    {
        int licz=tabl[i];
        int dziel=0;
        for(int j=2;j<=tabl[i];j++)
        {
            bool ok=1;
            while(tabl[i]%j==0)
            {
                tabl[i]=tabl[i]/j;
                if(ok)
                {
                    dziel++;
                    ok=0;
                }
            }
        }
        if(dziel>maksdziel)
        {
            maksdziel=dziel;
            makslicz=licz;
        }
    }
    cout<<makslicz<<" "<<maksdziel<<endl;
    for(int i=0;i<200;i++)
    {
        for(int j=i+1;j<200;j++)
        {
            if(tablica[i]>tablica[j])
                swap(tablica[i],tablica[j]);
        }
    }
    int licznik3=0;
    cout<<"4.3:"<<endl;
    for(int i=0;i<198;i++)
    {
        for(int j=i+1;j<199;j++)
        {
            for(int k=j+1;k<200;k++)
            {
                if(tablica[j]%tablica[i]==0 && tablica[k]%tablica[j]==0)
                {
                    licznik3++;
                    cout<<tablica[i]<<" "<<tablica[j]<<" "<<tablica[k]<<endl;
                }
            }
        }
    }
    cout<<licznik3<<endl;
    int licznik5=0;
    for(int i=0;i<196;i++)
    {
        for(int j=i+1;j<197;j++)
        {
            if(tablica[j]%tablica[i]!=0)
                    {
                         continue;
                    }
            for(int k=j+1;k<198;k++)
            {
                    if(tablica[k]%tablica[j]!=0)
                    {
                         continue;
                    }
                for(int g=k+1;g<199;g++)
                {
                    if(tablica[g]%tablica[k]!=0)
                    {
                         continue;
                    }
                    for(int h=g+1;h<200;h++)
                    {
                        if(tablica[j]%tablica[i]==0 && tablica[k]%tablica[j]==0 && tablica[g]%tablica[k]==0 && tablica[h]%tablica[g]==0)
                        {
                            licznik5++;
                            //cout<<tablica[i]<<" "<<tablica[j]<<" "<<tablica[k]<<" "<<tablica[g]<<" "<<tablica[h]<<endl;
                        }
                    }
                }
            }
        }
    }
    cout<<licznik5<<endl;
    return 0;
}
