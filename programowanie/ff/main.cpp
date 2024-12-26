#include <iostream>

using namespace std;

int main()
{   int liczba;
    int *tab;
    tab = new int [liczba];
    cin>>liczba;
    for(int i=0;i<liczba;i++)
    {
        cin>>tab[i];
    }

    for(int i=0;i<liczba;i++)
    {
        for(int i=0;i<liczba;i++)
        {
            if(tab[i]<tab[i+1]) swap(tab[i],tab[i+1]);
        }
    }
    if(liczba>10)
    {
    for(int i=0;i<10;i++)
    {
        cout<<tab[i]<<" ";
    }
    }
    else
    {
        for(int i=0;i<liczba;i++)
    {
        cout<<tab[i]<<" ";
    }
    }
    cout<<endl;
    delete [] tab;
    return 0;
}
