#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,w;
    cin>>n>>w;
    int tab[n];

    for(int i=0;i<n;i++)
    {
        tab[i]=rand()%20;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<tab[i]<<endl;
    }
    cout<<endl<<endl;
    //liniowe
    int liczbawyst=0;
    cout<<"Szukana liczba: "<<w<<endl;
     for(int i=0;i<n;i++)
    {
        if(tab[i]==w)
        {
            cout<<i+1<<endl;
            liczbawyst++;
            //break;
        }
    }
    if(liczbawyst==0) cout<<"Brak wyst"<<endl;
    else
    cout<<"Liczba wystapien: "<<liczbawyst<<endl;
    //binarne
    sort(tab,tab+n);
    for(int i=0;i<n;i++)
    {
        cout<<tab[i]<<endl;
    }
    int p=0;
    int k=n-1,x=-1;
    while(p<=k)
    {
        int s=(p+k)/2;
        if(tab[s]==w)
        {
            cout<<s+1;
            x++;
            break;
        }
        else if(tab[s]<w)
            p=s+1;
        else
            k=s-1;
    }
    if(x==-1)
        cout<<"Nie ma"<<endl;
    return 0;
}
