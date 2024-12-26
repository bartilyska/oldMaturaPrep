#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream plik("dane2_3.txt");
    string wiersz;
    int suma,maxi;
    while(plik>>wiersz)
    {
        suma=0;
        maxi=0;
    for(int i=0;i<wiersz.length();i++)
    {
        if(wiersz[i]=='[')
        {
            suma++;
        }
        else suma--;
        if(maxi<suma)
        {
            maxi=suma;
        }
    }
        cout<<maxi<<endl;
    }
    return 0;
}
