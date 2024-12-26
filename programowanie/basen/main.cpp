#include <bits/stdc++.h>

using namespace std;

int t,l,c;
int main()
{
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>l>>c;
        if((l-1)%c==0)
            cout<<"NIE"<<endl;
        else
            cout<<"TAK"<<endl;
    }

  return 0;
}
