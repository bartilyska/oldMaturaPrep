#include <iostream>
using namespace std;

int main()
{
    int n,t,a,b,licznik=0;
    int *tab;
    tab = new int [n];
    cin>>n;
      for(int i=0;i<n;i++)
    {
        cin>>tab[i];
    }
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        for(int l=a;l<=b;l++)
        {
            if(tab[l]==1) licznik++;
        }
            cout<<licznik<<endl;

    }
    delete [] tab;
    return 0;
}
