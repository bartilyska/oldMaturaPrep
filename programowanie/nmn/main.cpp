#include <iostream>

using namespace std;

int main()
{
    int t,n;
    string dzien,Pn,Wt,Sr,Cz,Pt,So,Nd,tab[7]={Pn,Wt,Sr,Cz,Pt,So,Nd};
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>dzien>>n;
        for(int j=0;j<7;j++)
        {
            if(dzien==tab[j])
            {
                int wynik=(j+n)%7;
                cout<<tab[wynik]<<endl;
            }
        }
    }
    return 0;
}
