#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        long long int tab[n];
        cin>>tab[0];
        long long int aktualny=tab[0];
        int ile_razy=1;
        for(int j=1;j<n;j++)
        {
            cin>>tab[j];
            if(tab[j]==aktualny)
            {
                ile_razy++;
            }
            else{
                if(ile_razy<=0)
                {
                    aktualny=tab[j];
                    ile_razy=1;
                }
                else
                {
                    ile_razy--;
                }
            }
        }
        int licz=0;
        for(int j=0;j<n;j++)
        {
            if(tab[j]==aktualny)
                licz++;
        }
        if(licz>n/2)
            cout<<aktualny<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
