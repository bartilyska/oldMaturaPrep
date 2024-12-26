#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>> container(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x;
                cin>>x;
                container[i][j]=x;
            }
        }
    int kolory[n]={0};
    int miejsca[n]={0};
        for(int i=0;i<container.size();i++)
        {
            for(int j=0;j<container.size();j++)
            {
                kolory[i]+=container[j][i];
                miejsca[i]+=container[i][j];
            }
        }
        sort(kolory,kolory+n);
        sort(miejsca,miejsca+n);
        int odp=1;
        for(int i=0;i<container.size();i++)
        {
            cout<<kolory[i]<<" "<<miejsca[i]<<endl;
        }
        for(int i=0;i<container.size();i++)
        {
            if(kolory[i]!=miejsca[i])
            {
            odp=0;
            break;
            }
        }
        if (odp)
        cout<< "Possible";
        else cout<<"Impossible";
    }
    return 0;
}
