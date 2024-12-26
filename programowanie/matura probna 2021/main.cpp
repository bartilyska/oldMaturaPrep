#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main()
{ //wczytanie
    ifstream plik;
    string kod[51],miasto[51];
    int liczba[51][140], licznik[50],pole[50],lokale[50];
    plik.open("galerie.txt");
    for(int i=1;i<=50;i++)
    {
        plik>>kod[i];
        plik>>miasto[i];
        for(int j=1;j<=140;j++)
        {
        plik>>liczba[i][j];
        }
    }
    plik.close();
//zad.4.1 ilosc galerii w panstwie z powtórzeniami powinno byc bez (1/4)
    for(int i=1;i<=50;i++)
    {
        for(int j=1;j<=50;j++)
        {
            if (kod[i]==kod[j])
            {
               licznik[i]++;
            }
        }

        cout<<kod[i]<<" "<<licznik[i]<<endl;
    }
    cout<<endl<<endl;
    //zad 4.2 a) pole i ilosc lokali (3/3)
    for(int i=1;i<=50;i++)
    {
        cout<<miasto[i]<<" ";
        for(int j=1;j<=140;j=j+2)
        {
            pole[i]+=liczba[i][j]*liczba[i][j+1];
            if(liczba[i][j]!=0 && liczba[i][j]!=0)
            lokale[i]++;

        }
        cout<<pole[i]<<" "<<lokale[i]<<endl;
    }
    cout<<endl<<endl;
    //zad 4.2b) najwieksze i najmniejsze pole (1/1)
    int najmniejsze=10000,najwieksze=0;
    string najm_miasto,najw_miasto;
    for(int i=1;i<=50;i++)
    {
        if(pole[i]>najwieksze)
        {
            najwieksze=pole[i];
            najw_miasto=miasto[i];
        }

        if(pole[i]<najmniejsze)
           {
               najmniejsze=pole[i];
               najm_miasto=miasto[i];
           }
    }
    cout<<"Najwieksza galeria w: "<<najw_miasto<<" "<<najwieksze<<endl;
    cout<<"Najmniejsza galeria w: "<<najm_miasto<<" "<<najmniejsze<<endl;
    cout<<endl<<endl;
    // zad 4.3 szukanie najw i najm ilosc lokali o takim samym polu
    int pole_1lokal[50][70];
    set <int> pole_bezpowt[50][70];
    for(int i=1;i<=50;i++)
    {
        for(int j=1;j<=70;j++)
        {
            pole_1lokal[i][j]=liczba[i][2*(j-1)]*liczba[i][2*j];
            pole_bezpowt[i][j]=pole_1lokal[i][j];
        }
    }

    return 0;
}
