#include <bits/stdc++.h>
using namespace std;
int main()
{
    const int n=7;
    float X[n]={5,3,5,7,-4,-9,-1};
    float Y[n]={4,5,7,4,2,1,3};
    for(int i=1;i<n;i++)
    {
       int j=i;
       while(j>0 && X[j-1]/Y[j-1]>X[j]/Y[j])
       {
           swap(X[j],X[j-1]);
           swap(Y[j],Y[j-1]);
           j--;
       }
    }
    for(int i=0;i<7;i++)
    {
        cout<<X[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<Y[i]<<" ";
    }
    return 0;
}
