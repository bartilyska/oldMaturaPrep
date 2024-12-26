#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0) cout<<0<<endl;
    else if(n>=1 && n<3) cout<<"NIE"<<endl;
    else
    {
        for(int i=1;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
        for(int i=0;i<=n;i=i+2)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}
