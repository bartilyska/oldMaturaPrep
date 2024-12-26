#include <iostream>

using namespace std;
int liczba[10];
int suma;
int main()
{
    for(int i=0;i<10;i++)
    {
        cin>>liczba[i];
        suma+=liczba[i];
    }
    cout<<"Suma :"<<suma;
    return 0;
}
