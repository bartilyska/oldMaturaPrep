#include <iostream>

using namespace std;
unsigned long long int nwd(unsigned long long int a,unsigned long long int b)
{
    if(b==0) return a;
    else nwd(b,a%b);
}
int main()
{
    unsigned long long int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        unsigned long long int t;
        cin>>t;
        unsigned long long int tab[t];
        for(int j=0;j<t;j++)
        {
            cin>>tab[j];
        }
        for(int j=1;j<t;j++)
        {
            tab[j]=tab[j-1]/nwd(tab[j-1],tab[j])*tab[j];
        }
        cout<<tab[t-1]<<endl;
    }
    return 0;
}
