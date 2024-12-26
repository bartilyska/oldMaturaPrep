#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{

    string slownik[5]={"wieloryb","mechanizm","paluszek","stadion","anatomia"};
    srand(time(NULL));
    string haslo=slownik[rand()%5];
    string odgadywane(haslo.length(),'*');
    int proby = 10;
    string odp;
    while((odgadywane!=haslo)&& (proby>0))
    {
        cout<<"Zgadnij haslo: "<<odgadywane<<endl;
        cout<<"Pozostalo prob: "<<proby<<endl;
        cout<<"Podaj litere: ";
        cin>>odp;
        cout<<odp<<endl;
        if(haslo.find(odp)<haslo.length())
        {
            int x=haslo.find(odp);
            while(x<haslo.length())
            {
                odgadywane.replace(x,1,odp);
                x=haslo.find(odp,x+1);
            }
        }
        else proby--;
    }
    if(haslo == odgadywane)
        cout<<"Gratulacje - haslo to: "<<haslo<<endl;
    else
        cout<<"Nie odgadnieto hasla: "<<haslo<<endl;
}
