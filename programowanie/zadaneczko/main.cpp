#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik("liczby.txt");
    int tab[500];
    for(int i=0;i<500;i++)
    {
        plik>>tab[i];
    }
    int sumaujemnych=0,sumadodatnich=0;
    for(int i=0;i<500;i++)
    {
        if(tab[i]<0 && tab[i]%10!=0)
        {
            sumaujemnych+=tab[i];
        }
        if(tab[i]>0 && tab[i]%10!=0)
        {
            sumadodatnich+=tab[i];
        }
    }
    cout<<sumaujemnych<<" "<<sumadodatnich<<endl;
    int rosnace=0,malejace=0;
    for(int i=0;i<496;i+=2)
    {
        if(tab[i]<tab[i+2] && tab[i+2]<tab[i+4])
            rosnace++;
    }
    cout<<rosnace<<endl;
    for(int i=1;i<496;i+=2)
    {
        if(tab[i]>tab[i+2] && tab[i+2]>tab[i+4])
            malejace++;
    }
    cout<<malejace<<endl;
    return 0;
}
