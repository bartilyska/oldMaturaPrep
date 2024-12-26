#include <iostream>
#include <cstdlib>


using namespace std;
int licznik;
int main()
{
    string d,m,j;
    cin>>d>>j>>m;
    int x=d.length();
    for(int i=0;i<x;i++)
    {
        if(d[i]!=j[i])
            licznik++;
            if(j[i]=='\0')
                licznik--;
    }
    for(int i=0;i<x;i++)
    {
        if(d[i]!=m[i])
            licznik++;
            if(m[i]=='\0')
                licznik--;
    }
    cout<<licznik<<endl;
    return 0;
}
