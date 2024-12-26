#include <iostream>

using namespace std;
double tab[14]={200,100,50,20,10,5,2,1,0.5,0.2,0.1,0.05,0.02,0.01};
double kwota;
int main()
{
    cin>>kwota;
    for(int i=0;i<14;i++)
    {
        while(kwota-tab[i]>=-0.001)
        {
            cout<<"Wydalem: "<<tab[i]<< "zl\n";
           kwota-=tab[i];
        }
    }
    return 0;
}
