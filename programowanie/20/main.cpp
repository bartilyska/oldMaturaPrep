#include <iostream>
#include <fstream>
#include<algorithm>
using namespace std;
bool czyanagram(string n,string s)
{
    int help1[100]={0},help2[100]={0};
    for(int i=0;i<n.length();i++)
    {
        help1[(int)n[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        help2[(int)s[i]]++;
    }
    for(int i='A';i<='Z';i++)
    {
        if(help1[i]!=help2[i])
            return false;
    }
    return true;
}
char podmiana(string n,string s)
{
    int help1[100]={0},help2[100]={0};
    for(int i=0;i<n.length();i++)
    {
        help1[(int)n[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        help2[(int)s[i]]++;
    }
    int zaduzo=0,zamalo=0;
    char dowymiany;
    for(int i='A';i<='Z';i++)
    {
        if(help1[i]+1==help2[i])
          {
              zamalo++;
              dowymiany=i;
          }
          if(help1[i]==help2[i]+1)
          {
              zaduzo++;
          }
    }
    if(zaduzo==1 && zamalo==1)
        return dowymiany;
    else return 0;
}
char najakapodmiana(string n,string s)
{
    int help1[100]={0},help2[100]={0};
    for(int i=0;i<n.length();i++)
    {
        help1[(int)n[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        help2[(int)s[i]]++;
    }
    int zaduzo=0,zamalo=0;
    char zebyzmienic;
    for(int i='A';i<='Z';i++)
    {
        if(help1[i]+1==help2[i])
          {
              zamalo++;
          }
          if(help1[i]==help2[i]+1)
          {
              zaduzo++;
              zebyzmienic=i;
          }
    }
    if(zaduzo==1 && zamalo==1)
        return zebyzmienic;
    else return 0;
}
void anagramy(string prefix, string slowo)
{
    if(slowo.length()==0)
    {
        cout<<prefix<<endl;
        return;
    }
    for(int i=0;i<slowo.length();i++)
    {
        if(i>0 && slowo[i]==slowo[i-1])
        {
            continue;
        }
        string nowyprefix=prefix+slowo[i];
        string noweslowo=slowo.substr(0,i)+slowo.substr(i+1);
        anagramy(nowyprefix,noweslowo);
    }
}
int main()
{
    const int n=200;
    string tab1[n],tab2[n];
    ifstream plik("anagramy.txt");
    ifstream pliczek("wyrazy.txt");
    int zad1=0;
    for(int i=0;i<n;i++)
    {
        plik>>tab1[i]>>tab2[i];
        if(czyanagram(tab1[i],tab2[i]))
            zad1++;
    }
    cout<<zad1<<endl;
    for(int i=0;i<n;i++)
    {
        if(!czyanagram(tab1[i],tab2[i]))
        {
            if(podmiana(tab1[i],tab2[i])>='A')
            cout<<tab1[i]<<" "<<tab2[i]<<" "<<najakapodmiana(tab1[i],tab2[i])<<" ";
            for(int j=0;j<tab2[i].length();j++)
            {
                if(podmiana(tab1[i],tab2[i])==tab2[i][j])
                {
                    cout<<j+1<<endl;
                    break;
                }
            }
        }
    }
    cout<<endl<<endl;

    string slowo="aabaa";
    sort(slowo.begin(),slowo.end());
    anagramy("",slowo);
    return 0;
}
