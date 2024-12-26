#include <bits/stdc++.h>
using namespace std;
int przedzial_male=0,najmniejsza=500,przedzial_duze=0,ilosc=0,najwieksza=0;
char znak;

int main() {
    cin>>ilosc;
    for(int i=1;i<=ilosc;i++)
    {
        cin>>znak;
        if((znak>='a') && (znak<='z')){
            if(znak<najmniejsza)
            najmniejsza=znak;
            if(znak>najwieksza)
            najwieksza=znak;
            przedzial_male=najwieksza-najmniejsza+1;
            continue;
        }
        if((znak>='F')&&(znak<='T'))
        {
            przedzial_duze++;
            continue;
        }
    }
if(najmniejsza==500)
{
    cout<<"Brak malych liter"<<endl;
}
else
    {
        cout<<"Przedzial w ktorym mieszcza sie male litery ma dlugosc "<<przedzial_male<<endl;
    cout<<"Najmniejsza leksykograficznie mala litera to "<<(char)najmniejsza<<endl;
    cout<<"Kod najmniejszej leksykograficznie malej litery "<<najmniejsza<<endl;
    }
if(przedzial_duze>0)
    cout<<"Liczba duzych liter od F do T wynosi "<<przedzial_duze<<endl;
    else
    cout<<"Brak duzych liter w przedziale F do T"<<endl;

 return 0;
}

