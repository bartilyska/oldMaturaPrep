#include <iostream>
#include <fstream>
using namespace std;
bool czypierwsza(long long int n)
{
    if(n%2==0) return false;
    if(n==2) return true;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int nwd(long long int a,long long int b)
{
    if(b==0) return a;
    else return nwd(b,a%b);
}
long long int szybkapotega(long long int m,long long int d,long long int n)
{
    long long int wynik=1;
    while(d>0)
    {
        if(d%2==1)
            wynik=(wynik*m)%n;
        m=(m*m)%n;
        d/=2;
    }
    return wynik;
}
long long int ztekstu(string n)
{
    long long int wynik=0;
    for(int i=0;i<n.length();i++)
    {
        wynik=wynik*10+(n[i]-'0');
    }
    return wynik;
}
int main()
{
    const int k=50;
    long long int n[k],e[k],d[k];
    ifstream plik("klucze.txt");
    ifstream pliczek("wiadomosc.txt");
    for(int i=0;i<k;i++)
    {
        plik>>n[i]>>e[i]>>d[i];
    }
    string tekst;
    getline(pliczek,tekst);
    /*for(int i=0;i<k;i++)
    {
        cout<<n[i]<<" "<<e[i]<<" "<<d[i];
        cout<<endl;
    }*/
    long long int maxi=-1,mini=100000000;
    for(int i=0;i<k;i++)
    {
        for(int j=2;j*j<=n[i];j++)
        {
            if(czypierwsza(j))
            {
                    if(n[i]%j==0)
                {
                    long long int help=n[i]/j;
                    if(czypierwsza(help))
                    {
                        if(help>maxi)
                            maxi=help;
                        if(j<mini)
                            mini=j;
                        long long int pomoc=(j-1)*(help-1);
                        if(nwd(d[i],n[i])!=1 || nwd(e[i],pomoc)!=1)
                        {
                            cout<<n[i]<<" "<<e[i]<<" "<<d[i]<<endl;
                            break;
                        }
                        if((e[i]*d[i])%pomoc!=1)
                        {
                            cout<<n[i]<<" "<<e[i]<<" "<<d[i]<<endl;
                            break;
                        }
                    }
                }
            }
        }
    }
    cout<<maxi<<" "<<mini<<endl;
    string x=tekst.substr(0,9);
    int y=ztekstu(x);
    for(int j=0;j<50;j++)
    {
    for(int i=0;i<tekst.length();i+=9)
    {
        string x=tekst.substr(i,9);
        int y=ztekstu(x);
        cout<<szybkapotega(y,d[j],n[j])<<endl;
    }
    }
    return 0;
}
