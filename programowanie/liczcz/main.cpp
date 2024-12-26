#include <bits/stdc++.h>

using namespace std;
bool funkcja(string n)
{
    for(int i=0;i<n.length();i++)
    {
        if((n[i]-'0')%2==0)
            return true;
    }
    return false;
}
int main()
{
    string n;
    cin>>n;
    if(funkcja(n))
        cout<<"Tak"<<endl;
    else cout<<"Nie"<<endl;
    return 0;
}
