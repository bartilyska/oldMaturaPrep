#include <iostream>

using namespace std;

int main()
{
    int tab[200];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cin>>tab[j];

        }
        for(int k=1;k<n;k++)
        {
            cout<<tab[k]<<" ";
        }
        cout<<tab[0];
        cout<<endl;
    }
    return 0;
}
