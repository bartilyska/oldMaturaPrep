#include <iostream>

using namespace std;
int zbior(int n)
{
    if(n==0) return 1;
    if(n>0) return 2*zbior(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<zbior(n)<<endl;
    return 0;
}
