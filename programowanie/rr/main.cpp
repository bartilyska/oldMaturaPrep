#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,n,x;
    float suma, srednia;
    int *tab;
    tab = new int [n];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        suma=0;
            for(int j=0;j<n;j++)
            {

                cin>>tab[j];
                suma= suma+tab[j];
            }
             srednia=suma/n;
            for (int o=0;o<n;o++)
            {
            for(int k=0;k<n;k++)
            {

                if (fabs (tab[k]-srednia) > fabs(tab[k+1]-srednia))
               {
                swap(tab[k],tab[k+1]);
               }
            }
            }
            cout<<tab[0]<<endl;
    }
    delete [] tab;
    return 0;
}
