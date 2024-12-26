#include <iostream>
#include <fstream>
using namespace std;
bool pierwsza(int n)
    {
        int i=2;
        if(n<=1)return false;
        while(i*i<=n)
        {
            if(n%i==0) return false;
            i++;
        }
        return true;
    }
int main()
{

    int n,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
    cin>>n;
    if(pierwsza(n))cout<<"TAK"<<endl;
    else cout<<"NIE"<<endl;
    }
    return 0;
}
