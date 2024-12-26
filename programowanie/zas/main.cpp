#include <iostream>

using namespace std;
int n,k, tab[10000],bat[10000];
int main()
{

    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>tab[i];
        cout<<tab[i]<<endl;
    }
    for(int i=1;i<=k;i++)
    { for(int j=1;j<=n;j++)
    {
        if(j=n)tab[j]=bat[1];
        else
        tab[j]=bat[j+1];

    }
    cout<<bat[i]<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<bat[i]<<" ";
    }
    return 0;
}
