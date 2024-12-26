#include <iostream>
using namespace std;
int main()
{
    string tab[100000];
    for(int i=0;i<1000;i++)
    {
        cin>>tab[i];
    }
    for(int i=1000;i>=0;i--)
    {
        cout<<tab[i];
    }
return 0;
}
