#include <iostream>

using namespace std;

int main()
{
    int a,b,reszta;
    cin>>a>>b;
    while(b!=0)
    {
        reszta=a%b;
        a=b;
        b=reszta;
    }
    cout<<b<<endl;
    return 0;
}
