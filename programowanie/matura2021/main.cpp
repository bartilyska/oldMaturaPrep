#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream plik("instrukcje.txt");
    string polecenie[2000];
    char litera[2000];
    string napis="";
    for(int i=0;i<2000;i++)
    {
        plik>>polecenie[i]>>litera[i];
    }
 //4.1
    int licznik=0;
    for(int i=0;i<2000;i++)
    {
       if(polecenie[i]=="DOPISZ") licznik++;
       if(polecenie[i]=="USUN") licznik--;
    }
    cout<<"ZAD.4.1: "<<licznik<<endl;
//4.2
    int maxi=0;
    string instrukcja;
    int obecnie=1;
    for(int i=0;i<1999;i++)
    {
        if(polecenie[i]==polecenie[i+1])
        {
        obecnie++;
        if(obecnie>maxi)
            maxi=obecnie;
            instrukcja=polecenie[i];
        }
        else obecnie=1;
    }
    cout<<"Zad.4.2: "<<instrukcja<<" "<<maxi<<endl;
//4.3
    int tablica[200];
    int najcz=0;
    int index=0;
    for(int i=0;i<2000;i++)
    {
        if(polecenie[i]=="DOPISZ")
        {
            tablica[(int)litera[i]]++;
        }
    }
    for(int k=0;k<200;k++)
    {
        if(najcz<tablica[k])
        {
            najcz=tablica[k];
            index=k;
        }
    }
    cout<<"Zad.4.3: "<<(char)index<<" "<<najcz<<endl;
//4.4
    for(int i=0;i<2000;i++)
    {
        int dl=napis.length();
        if(polecenie[i]=="DOPISZ") napis=napis+litera[i];
        if(polecenie[i]=="USUN")  napis=napis.erase(dl-1,1);
        if(polecenie[i]=="ZMIEN") napis=napis.erase(dl-1,1)+litera[i];
        if(polecenie[i]=="PRZESUN")
        {
            for(int l=0;l<dl;l++)
            {
                if(napis[l]==litera[i])
                {
                    if(napis[l]=='Z')
                    {
                        napis[l]='A';
                        break;
                    }
                    else
                    {
                    napis[l]=(char) ((int) napis[l]+1);
                    break;
                    }
                }
            }
        }
    }
    cout<<"Zad.4.4: "<<napis<<endl;
    return 0;
}
