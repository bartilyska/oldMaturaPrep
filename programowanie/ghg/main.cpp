#include <iostream>

using namespace std;

int main()
{  int n,m,a,b,t,licznik;
char l;
cin>>n>>m;
int *tab;
tab = new int [n];
int *bat;
bat =new int [m];
for(int i=0;i<n;i++)
{
    cin>>tab[i];
}
for(int i=0;i<m;i++)
{
    cin>>bat[i];
}

cin>>t;
for(int i=0;i<t;i++)
{
    licznik=1;

    cin>>a>>b>>l;
    if(l=='A')
    {
        if(b!=1)
        for(int i=0;i<b-1;i++)
        {
            a=a+tab[i];
        }
        cout<<a<<endl;

            for(int i=0;i<m;i++)
            {
            while(a-bat[i]>0)
            {
               a=a-bat[i];
               licznik++;
               }

            }
               cout<<a<<" "<<licznik<<endl;
    }

        if(l=='B')
    {
        if(b!=1)
        for(int i=0;i<b-1;i++)
        {
            a=a+bat[i];
        }
        cout<<a<<endl;

            for(int i=0;i<n;i++)
            {
            while(a-tab[i]>0)
            {
               a=a-tab[i];
               licznik++;
               }

            }
               cout<<a<<" "<<licznik<<endl;
    }
}

delete [] tab;
delete [] bat;

    return 0;
}
