#include <iostream>

using namespace std;
long long int funkcja(string n)
{
    long long int wynik=0;
    for(int i=0;i<n.length();i++)
    {
        wynik=wynik*7+(n[i]-'0');
    }
    return wynik;
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string liczba;
        cin>>liczba;
        if(funkcja(liczba)%6==0)
            cout<<"TAK ";
        else cout<<"NIE ";
        if(funkcja(liczba)%8==0)
            cout<<"TAK ";
        else cout<<"NIE ";
        if(funkcja(liczba)%343==0)
            cout<<"TAK ";
        else cout<<"NIE ";
    }
    return 0;
}
