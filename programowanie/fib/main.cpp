#include <iostream>

using namespace std;
int n;
int fib[100000];
int main()
{
    cout <<"Ile liczb mam wyznaczyc: "<< endl;
    cin>>n;
    fib[0]=1;
    fib[1]=1;
    for(int i = 2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i = 0;i<n;i++)
    {
        cout<<"Wyraz nr: "<<i+1<<": "<<fib[i]<<endl;
    }

    return 0;
}
