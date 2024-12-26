#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> liczby;
    int x;
    while(cin>>x)
    {
        liczby.push_back(x);
    }
    reverse(liczby.begin(),liczby.end());
    for(int i=0;i<liczby.size();i++)
    {
        cout<<liczby[i]<<" ";
    }
    return 0;
}
