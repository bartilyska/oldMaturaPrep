#include <iostream>

using namespace std;
string funkcjafib(int n)
{
    if(n==0) return "TAK";
    int x1=0,x2=1,x3;
    while(x1<=n)
    {
        x3=x1+x2;
        x1=x2;
        x2=x3;
        if(n==x1) return "TAK";
    }
    return "NIE";
}
int main()
{
    string napis;
    getline(cin,napis);
    string wynik="";
    int x1=1,x2=1,x3;
    for(int i=0;i<napis.length();i++)
    {
        if(napis[i]>='A' && napis[i]<='Z')
        {
            napis[i]=char((int)napis[i]+x1);
            if(napis[i]>'Z')
                napis[i]-=26;
            x3=(x1+x2)%17;
            x1=x2;
            x2=x3;
            wynik=wynik+napis[i];
        }
    }
    cout<<wynik<<endl;
    return 0;
}
