#include <iostream>
using namespace std;
bool pierwsza(int n)
{
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i=i+2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
   int n,d,k=0;
   cin>>n>>d;
   long int p[5000],q[n];
    for(int i=2;i<1000000;i++)
    {
        if(pierwsza(i))
        {
            p[k]=i;
            k++;
        }
        if(k>5000) break;
    }
    for(int i=0;i<n;i++)
    {
        q[i]=p[i]*p[i+d];
    }
    int licznik=0,lol=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int s=j;s<n;s++)
            {
                for(int r=s;r<n;r++)
                {
                if(q[i]+q[j]+q[s]==q[r]) licznik++;
                if(q[i]+q[j]+q[s]>q[r]) lol++;
                }
            }
        }
    }
    cout<<licznik<<endl;
    cout<<lol<<endl;
    return 0;
}
