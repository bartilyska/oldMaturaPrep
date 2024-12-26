#include <iostream>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int tab[30]={0};
    int maxdl=0;
    for(int i=0;i<s.length();i++)
    {
        tab[s[i]-'a']++;
    }
    //for(int i=0;i<30;i++)
    //{
    //    cout<<tab[i]<<endl;
    //}
    for(int i=0;i<s.length();i++)
        {
            tab[s[i]-'a']++;
        }
    for(int i=0;i<27;i++)
    {
        for(int j=i+1;j<28;j++)
        {
            if(tab[i]!=0 && tab[j]!=0)
                {
                        string p=s;
                    for(int k=0;k<p.length();k++)
                    {
                    if(p[k]!='a'+i && p[k]!='a'+j)
                        {
                            p.erase(k);
                            k--;
                        }
                    }
                    cout<<p<<endl;
                bool ok=1;
                for(int k=0;k<p.length()-1;k++)
                {
                    if(p[k]==p[k+1])
                    ok=0;
                }
                if(p.length()>maxdl && ok)
                {
                    maxdl=p.length();
                }
                }
        }
    }
    cout<<maxdl;


    return 0;
}
