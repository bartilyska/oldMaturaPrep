#include <iostream>
#include <fstream>
#include<algorithm>
using namespace std;
bool czypalindrom(string s)
{
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
            return false;
    }
    return true;
}
int main()
{
    const int n=2000;
    string tab[n];
    ifstream plik("slowa.txt");
    for(int i=0;i<n;i++)
    {
        plik>>tab[i];
    }
    int odp1=0;
    int rodzina[300]={0};
    for(int i=0;i<n;i++)
    {
        if(czypalindrom(tab[i]))
           {
               odp1++;
               rodzina[tab[i].length()]++;
           }
    }
    cout<<"zad1 "<<odp1<<endl;
    int odp2=0;
    for(int i=0;i<300;i++)
    {
        if(rodzina[i]>0)
            odp2++;
    }
    cout<<"zad2 "<<odp2<<endl;
    sort(tab,tab+2000);
    int x=1;
    while(x<=200)
    {
        cout<<"rodzina "<<x<<endl;
    for(int i=0;i<2000;i++)
    {
        if(czypalindrom(tab[i]) && tab[i].length()==x)
            cout<<tab[i]<<endl;
    }
    cout<<endl;
    x++;
    }
    return 0;
}
