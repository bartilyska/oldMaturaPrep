#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
    ifstream plik("dane.txt");
    int n=2526;
    vector <int> tab;
    for(int i=0;i<n;i++)
    {
        int x;
        plik>>x;
        tab.push_back(x);
    }
    int odp=0;
    vector <int> pomoc;
    for(int i=1;i<=10000;i++)
    {
       pomoc.push_back(i);
    }
    for(int i=0;i<10000;i++)
    {
        if(i%2==1) pomoc.erase(i,i+1);
    }
    for(int i=0;i<10000;i++)
    {
        cout<<pomoc[i]<<endl;
    }
    return 0;
}
