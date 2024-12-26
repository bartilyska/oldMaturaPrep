#include <iostream>
#include <cmath>
using namespace std;

long long int szybkapotega(int p,int w)
{
    int wynik=1;
    while(w>=1)
    {
        if(w%2==1)
            wynik*=p;
        p*=p;
        w=w/2;
    }
    return wynik;
}
float srednia(int t[],int rozmiar,float stopien)
{
    float licznik=0;
    float odp=0;
    for(int i=0;i<rozmiar;i++)
    {
        licznik+=szybkapotega(t[i],stopien);
    }
    odp=pow(licznik/rozmiar,1/stopien);
    return odp;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int w,liczniczek=0;
        cin>>w;
        int tab[w];
        for(int j=0;j<w;j++)
        {
            cin>>tab[j];
            if(tab[j]>=5)liczniczek++;
        }
        if(srednia(tab,w,1)>=4)
               {
                  cout<<"1"<<"\n";
                  liczniczek=-1;
               }
        if(liczniczek>=1)
        {
        for(int k=2;k<80;k++)
        {
            if(srednia(tab,w,k)>=4)
            {
                cout<<k<<"\n";
                break;
            }
        }
        }
        else if(liczniczek==0)
        {
            cout<<"-1"<<"\n";
        }
    }
    return 0;
}
