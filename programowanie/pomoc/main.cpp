#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n=28,help=n,odp=1;
    for(int i=1;i<=28;i++)
    {
            for(int i=2;i*i<=help;i++)
            {
                if(help%i==0)
                odp=odp+i+help/i;
            }
        help=odp;
        if(help==n)
        {
            cout<<"prawda"<<" "<<i<<endl;
            exit(0);
        }
        odp=1;
    }
        cout<<"falsz"<<endl;
    return 0;
}
