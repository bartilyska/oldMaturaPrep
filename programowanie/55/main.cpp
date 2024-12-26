#include <iostream>

using namespace std;
void funkcja()
{
    string napis;
    cin>>napis;
    int x=napis.length();
    int z=x/2;
    for(int i=0;i<z;i++)
    {
        cout<<napis[i];
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        funkcja();
    }

    return 0;
}
