#include <iostream>

using namespace std;

int main()
{
    //kompresja
    string s;
    cin>>s;
    int dl=s.length();
    int n=1;
    for(int i=0;i<dl;i++)
    {
        if(s[i]==s[i+1])
            n++;
        else{
            if(n>2)
                cout<<s[i]<<n;
            else{
                while(n>0)
                {
                    cout<<s[i];
                    n--;
                }
            }
            n=1;
        }
    }
    //dekompresja
    /*string s;
    cin>>s;
    int dl=s.length();
    int n=0;
    char c;
    for(int i=0;i<dl;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            if(s[i+1]<='Z' && s[i+1]>='A' && i<dl)
            cout<<s[i];
            else{
            c=s[i];
            i++;
            while(s[i]>='0' && s[i]<='9' && i<dl)
            {
                n=n*10+int(s[i]-'0');
                i++;
            }
            while(n>0)
            {
                cout<<c;
                n--;
            }
            i--;
            }
        }
    }
    if(s[dl-1]>='A' && s[dl-1]<='Z')
    cout<<s[dl-1];*/
    return 0;
}
