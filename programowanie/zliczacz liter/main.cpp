#include <iostream>

using namespace std;
int liczba_wierszy_do_analizy;
string napis;
int help;
int main()
{
    cin>>liczba_wierszy_do_analizy;
    for(int i=0;i<=liczba_wierszy_do_analizy;i++)
    {
        getline(cin,napis);
        help=napis.length();
    }
    for(int i=97;i<=122;i++)
    {
        cout<<(char)i<<endl;
    }
    cout<<help<<endl;
    return 0;
}
