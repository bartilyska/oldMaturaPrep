#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string napis;
    cin>>napis;
    int tab[12]={'a','e','o','u','y','i','A','E','O','Y','U','I'};
    int dl=napis.length(),licznik=0;
    for(int i=0;i<dl;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(napis[i]==tab[j]) licznik++;
        }
    }
    cout<<licznik<<endl;
    return 0;
}
