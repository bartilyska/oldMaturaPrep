#include <bits/stdc++.h>

using namespace std;
int na10(string n)
{
    int wynik=0;
    for(int i=0;i<n.length();i++)
    {
        wynik=wynik*2+(n[i]-'0');
    }
    return wynik;
}
int main()
{
    int a,r;
    cin>>a>>r;
    int n;
    cin>>n;
    float x[n],y[n];
    int odp=n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;i++)
    {
        float dl=sqrt(pow(x[i]-a,2)+pow(y[i],2));
        if(r>=dl)
            odp--;
    }
    cout<<odp<<endl;
    return 0;
}
