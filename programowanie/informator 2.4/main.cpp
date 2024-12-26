#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   string wiersz;
    ifstream plik("dane2_4.txt");
    while(plik>>wiersz)
    {
        int licznik=0;
        for(int i=0;i<wiersz.length();i++)
        {
            if(wiersz[i]=='[') licznik++;
            else licznik--;
        }
        if(licznik==0)
            cout<<"tak"<<endl;
        else
            cout<<"nie"<<endl;
    }

    return 0;
}
