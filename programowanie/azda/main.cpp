#include <iostream>

using namespace std;

void funkcja()
{
    int ilosc,liczba,suma=0;
    cin>>ilosc;
    while(ilosc)
    {
        cin>>liczba;
        suma=suma+liczba;
        ilosc--;
    }
    cout<<suma<<endl;
}
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        funkcja();
    }
    return 0;
}
