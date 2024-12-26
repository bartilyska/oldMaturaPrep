#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int wyniki[310];
    ifstream plik ("dziennik.txt");
    for(int i=0;i<310;i++)
    {
        plik>>wyniki[i];
    }
    //a)
    int passa=1,licznik=0;

    for(int i=0;i<310;i++)
    {
        if(wyniki[i]<wyniki[i+1]) passa++;
        if(wyniki[i]>=wyniki[i+1]) passa=1;
        if(passa==4) licznik++;

    }
    cout<<"5.1: "<<licznik<<endl;
    //5.2
    int maxi=0,mini=1000,index_maxi,index_mini;
    for(int i=0;i<310;i++)
    {
        if(wyniki[i]>maxi)
        {
            maxi=wyniki[i];
            index_maxi=i;
        }
        if(wyniki[i]<mini)
        {
            mini=wyniki[i];
            index_mini=i;
        }
    }
    cout<<"5.2:"<<endl;
    cout<<"najwieksza odleglosc: "<<maxi<<" dzien: "<<index_maxi+1<<endl;
    cout<<"najmniejsza odleglosc: "<<mini<<" dzien: "<<index_mini+1<<endl;
    //5.3
    int wynik_koniec,dzien_koniec,dlugosc=1,maks_dlugosc=1;
    for(int i=0;i<310;i++)
    {
        if(wyniki[i]<wyniki[i+1]) dlugosc++;
        if(dlugosc>maks_dlugosc)
        {
           maks_dlugosc=dlugosc;
           wynik_koniec=wyniki[i+1];
           dzien_koniec=i+1;
        }
        if(wyniki[i]>=wyniki[i+1]) dlugosc=1;
    }
    int poprawa=wynik_koniec-wyniki[dzien_koniec-maks_dlugosc+1];
    cout<<"5.3:"<<endl;
    cout<<"ilosc dni: "<<maks_dlugosc<<endl;
    cout<<"poprawa: "<<poprawa<<endl;

    return 0;
}
