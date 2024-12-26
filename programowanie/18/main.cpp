#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;
int liczba(char n)
{
    if(n=='A') return 10;
    if(n=='B') return 11;
    if(n=='C') return 12;
    if(n=='D') return 13;
    if(n=='E') return 14;
    if(n=='F') return 15;
    else return (int)(n-'0');
}
long int zdowolnego(string n,int podstawa)
{
    int wynik=0;
    for(int i=0;i<n.length();i++)
    {
        wynik=wynik*podstawa+liczba(n[i]);
    }
    return wynik;
}
int main()
{
    const int n=100;
    ifstream plik("trzyliczby.txt");
    string tab[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            plik>>tab[i][j];
        }
    }
    int help[17]={0};
    long int maxi=-1,mini=1000000;
    string x;
    for(int i=0;i<n;i++)
    {
        for(int j=16;j>=2;j--)
        {
            if(zdowolnego(tab[i][0],j)+zdowolnego(tab[i][1],j)==zdowolnego(tab[i][2],j))
            {
                help[j]++;
                if(zdowolnego(tab[i][2],j)>maxi)
                    maxi=zdowolnego(tab[i][2],j);
                if(zdowolnego(tab[i][0],j)<mini)
                    mini=zdowolnego(tab[i][0],j);
                if(zdowolnego(tab[i][1],j)<mini)
                    mini=zdowolnego(tab[i][1],j);
                break;
            }
        }
    }
    for(int i=2;i<=16;i++)
    {
        cout<<i<< " : "<<help[i]<<endl;
    }
    cout<<maxi<<endl;
    cout<<mini<<endl;
    cout<<x<<endl;
    int helpik[16]={0};
    float liczbaliter=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<tab[i][j].length();k++)
            {
                helpik[liczba(tab[i][j][k])]++;
                liczbaliter++;
            }

        }
    }
    for(int i=0;i<16;i++)
    {
        if(i>=10) cout<<char('A'+i-10)<<" : "<<fixed <<setprecision(2) <<(helpik[i]/liczbaliter)*100<<"%"<<endl;
        else cout<<i<< " : "<<fixed <<setprecision(2)<<(helpik[i]/liczbaliter)*100<<"%"<<endl;
    }
    return 0;
}
