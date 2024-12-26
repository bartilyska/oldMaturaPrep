#include <iostream>

using namespace std;
int t,a,b;

int main()
{
    cin>>t;
    for(int i=1;i>t;i++)
    {
        cin>>a>>b;
        while(b!=0)
    {
        int pom = b;
        b=a%b;
        a=pom;
    }
        cout<<a;
    }

    return 0;
}
