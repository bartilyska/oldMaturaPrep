#include <bits/stdc++.h>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int tab[n];
    long long int prefix[n];
    for(int i=0;i<n;i++)
    {
        cin>>tab[i];
    }
    prefix[0]=tab[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+tab[i];
    }
    long long int mini=0;
    long long int maxsuma=0;
    for(int i=0;i<n;i++)
    {
        if(prefix[i]<mini)
        {
            mini=prefix[i];
        }
        if(prefix[i]-mini>maxsuma)
            maxsuma=prefix[i]-mini;
    }
    cout<<maxsuma<<endl;
    return 0;
}
