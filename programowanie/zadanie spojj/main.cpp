#include <iostream>
using namespace std;
int main()
{
    int d;
    cin>>d;
    for(int i=0;i<d;i++)
    {
        int n;
        cin>>n;
        int tab[n];
        for (int j=0;j<n;j++)
        {
            cin>>tab[j];
        }
        int dup[n]={0},licz[n+1]={0};
       for(int j=0;j<n-1;j++)
       {
           for(int k=j+1;k<n;k++)
           {
               if(tab[j]==tab[k])
               {
                   dup[k]=1;
               }
           }
       }
        for(int j=0;j<n;j++)
        {
            licz[tab[j]]++;
        }
        int p=1;
        for(int k=0;k<n;k++)
        {
            if(dup[k]==1)
            {
                while(p<n+1)
                {
                    if(licz[p]==0)
                    {
                        tab[k]=p;
                        break;
                    }
                    p++;
                }
                p++;
            }
        }
        for(int j=0;j<n;j++)
        {
            cout<<dup[j]<<" ";
        }
    }
    return 0;
}
