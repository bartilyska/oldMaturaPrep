#include <iostream>

using namespace std;


int main()
{
    int a;
    cin>>a;
    if(a==0) cout<<"NIE"<<endl;
    while(a>0)
    {
    if(a%2==0)
    {
        cout<<"TAK"<<endl;
        exit(0);
    }
    a=a/10;
    }
    cout<<"NIE"<<endl;
    return 0;
}
