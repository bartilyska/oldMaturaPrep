#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int tab[n];
    for(int i=0;i<n;i++)
    {
        cin>>tab[i];
    }
    int r,maxi=0,roznica,pierwszyel;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int ilewciagu=2;
            r=tab[j]-tab[i];
            int poprzedni=tab[j];
            for(int k=j+1;k<n;k++)
            {
                if(tab[k]-poprzedni==r)
                {
                    ilewciagu++;
                    poprzedni=tab[k];
                }
            }
            if(ilewciagu>maxi)
            {
                maxi=ilewciagu;
                roznica=r;
                pierwszyel=tab[i];
            }
        }
    }
    for(int i=0;i<maxi;i++)
    {
        cout<<pierwszyel+i*roznica<<endl;
    }
    return 0;
}
