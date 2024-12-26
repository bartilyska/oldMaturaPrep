#include <iostream>

using namespace std;
bool czypierwsza(int n)
{
    if(n==2) return true;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    for(int i=2;i<1000;i++)
    {
        if(czypierwsza(i) &&czypierwsza(i+2) &&czypierwsza(i+6) &&czypierwsza(i+8))
            cout<<i<<" "<<i+2<<" "<<i+6<<" "<<i+8<<endl;
    }
    return 0;
}
