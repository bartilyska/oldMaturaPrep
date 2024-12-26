#include <iostream>

using namespace std;

int main()
{
    int i=1,k=1,n;
    cin>>n;
    while(i*i<=n) i++;
    i--;
    while(k<=i)
    {
    if(i*i+k*k==n)
    {
        cout<<i<<" "<<k;
        break;
    }
    else if (i*i+k*k<n)
        k++;
    else
        i--;

    }
    return 0;
}
