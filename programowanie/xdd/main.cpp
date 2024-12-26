#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int dl,jedynki;
        cin>>dl>>jedynki;
        string napis;
        cin>>napis;
        int maxdlugosc=0;
        int pocz=0,kon=0;
        int licz1=0;
        while(kon<dl)
        {
            if(napis[kon]=='1')
                licz1++;
            if(licz1>jedynki)
            {
                while(napis[pocz]=='0')
                {
                    pocz++;
                }
                pocz++;
                licz1--;
            }
            if(kon-pocz+1>maxdlugosc)
                maxdlugosc=kon-pocz+1;
            kon++;
        }
        cout<<maxdlugosc<<endl;
    }
    return 0;
}
