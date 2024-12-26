#include <iostream>
#include <fstream>
using namespace std;
bool czypierwsza(int p)
{
    if(p<2) return false;
    if(p==2) return true;
    if(p%2==0) return false;
    for(int i=3;i*i<=p;i=i+2)
    {
        if(p%i==0) return false;
    }
    return true;
}
bool prostokatny(int a,int b,int c)
{
    if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)
        return true;
    else return false;
}
bool trojkat(int a,int b, int c)
{
    if(a+b>c && a+c>b && b+c>a)
        return true;
    else return false;
}
int main()
{
    ifstream plik("trojki.txt");
    int liczba1[1000],liczba2[1000],liczba3[1000];
    for(int i=0;i<1000;i++)
    {
        plik>>liczba1[i]>>liczba2[i]>>liczba3[i];
    }
    int licznik=0;
    for(int i=0;i<1000;i++)
    {
        int help1=liczba1[i],help2=liczba2[i];
        int suma1=0,suma2=0;
        while(help1>=1)
        {
            int cyfra=help1%10;
            suma1+=cyfra;
            help1=help1/10;
        }
        while(help2>=1)
        {
            int cyfra=help2%10;
            suma2+=cyfra;
            help2=help2/10;
        }
        if(suma1+suma2==liczba3[i])
        {
            cout<<liczba1[i]<<" "<<liczba2[i]<<" "<<liczba3[i]<<endl;
        }
    }
    cout<<endl;
    for(int i=0;i<1000;i++)
    {
        if(czypierwsza(liczba1[i])&&czypierwsza(liczba2[i])&&
           liczba3[i]==liczba1[i]*liczba2[i])
            cout<<liczba1[i]<<" "<<liczba2[i]<<" "<<liczba3[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<1000;i++)
    {
        if(prostokatny(liczba1[i],liczba2[i],liczba3[i]) &&
           prostokatny(liczba1[i+1],liczba2[i+1],liczba3[i+1]))
        {
        cout<<liczba1[i]<<" "<<liczba2[i]<<" "<<liczba3[i]<<endl;
        cout<<liczba1[i+1]<<" "<<liczba2[i+1]<<" "<<liczba3[i+1]<<endl;
        }
    }
    cout<<endl;
    int odp4=0;
    for(int i=0;i<1000;i++)
    {
        if(trojkat(liczba1[i],liczba2[i],liczba3[i]))
            odp4++;
    }
    cout<<odp4<<endl;
    int najdluzszy=0,ciag=0;
    for(int i=0;i<1000;i++)
    {
        if(trojkat(liczba1[i],liczba2[i],liczba3[i]))
            {
                ciag++;
                if(najdluzszy<ciag)
                    najdluzszy=ciag;
            }
        else ciag=0;
    }
    cout<<najdluzszy<<endl;
    plik.close();
    return 0;
}
