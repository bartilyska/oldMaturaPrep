#include <iostream>
#include <cmath>
using namespace std;
long long int a,b,t;
int main()
{
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;

        long long int x=pow(a,b);
        long long int y=x%10;
        cout<<y<<endl;
    }
    return 0;
}
