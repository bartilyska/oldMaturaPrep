#include <iostream>

using namespace std;
string na2(int p)
{
    string wynik="";
    while(p>0)
    {
        char x=char((p%2)+48);
        wynik=x+wynik;
        p=p/2;
    }
    return wynik;
}
bool czypalindrom(string s)
{
    for(int i=0;i<s.size()/2;i++)
    {
        if(s[i]!=s[s.length()-1-i])
            return false;
    }
    return true;
}
bool palindrom(int x)
{
    int pomoc=x,palindrom=0;
    while(pomoc>0)
    {
        palindrom=palindrom*10+pomoc%10;
        pomoc/=10;
    }
    if(palindrom==x)
    return true;
    else return false;
}
int nowy_palindrom(int liczba,bool symetria)
{
    int nowy=liczba;
    if(!symetria) liczba/=10;
    while(liczba>0)
    {
        nowy=nowy*10+liczba%10;
        liczba/=10;
    }
    return nowy;
}
int main()
{
   int n=1000;
   int suma=0;
    for(int i=1;i<n;i++)
    {
        int x=nowy_palindrom(i,0);
        int y=nowy_palindrom(i,1);
        if(czypalindrom(na2(x)))
            suma+=x;
        if(czypalindrom(na2(y)))
            suma+=y;
    }
    cout<<suma<<endl;
    return 0;
}
