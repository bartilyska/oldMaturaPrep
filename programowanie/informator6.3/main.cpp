#include <iostream>
#include <fstream>
using namespace std;
bool antypalindrom(string s)
{
    for(int i=0;i<s.length()/2;i++)
    {
        if(s[i]==s[s.length()-i-1])
           return false;
    }
    return true;
}
int main()
{
    ifstream plik("dane6.txt");
    ofstream zapis("odp6_3.txt");
    string s;
    int licznik=0;
    for(int i=0;i<2023;i++)
    {
        plik>>s;
        if(antypalindrom(s))
        {
            licznik++;
            zapis<<s<<endl;
        }
    }
    zapis<<licznik<<endl;
    return 0;
}
