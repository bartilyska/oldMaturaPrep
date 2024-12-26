#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    ifstream plik("oddzialy.txt");
    const int n=50;
    int tabx[n],taby[n];
    for(int i=0;i<n;i++)
    {
        plik>>tabx[i]>>taby[i];
    }
    int pozazasiegu=50,zniszczenia=0;
    for(int i=0;i<n;i++)
    {
        int dl=tabx[i]*tabx[i]+taby[i]*taby[i];
        if(dl==400 || dl==1)
        {
            zniszczenia+=25;
            pozazasiegu--;
        }
        if(dl<400 && dl>1)
        {
            zniszczenia+=100;
            pozazasiegu--;
        }
    }
    cout<<zniszczenia<<" "<<pozazasiegu<<endl;
    float maxdl=-1;
    for(int i=0;i<n;i++)
    {
        float dl=sqrt(tabx[i]*tabx[i]+taby[i]*taby[i]);
        if(dl>maxdl)
            maxdl=dl;
    }
    cout<<fixed<<setprecision(3)<<maxdl+0.001<<endl;
    int xowa,yowa,zolnierze=-1;
    for(int i=-20;i<=20;i++)
    {
        for(int j=-20;j<=20;j++)
        {
            if(i*i+j*j>=4)
            {
                int straty=0;
                for(int k=0;k<n;k++)
                {
                    int rownanie=(tabx[k]-i)*(tabx[k]-i)+(taby[k]-j)*(taby[k]-j);
                    if(rownanie==4) straty+=25;
                    if(rownanie<4) straty+=100;
                }
                if(straty>zolnierze)
                {
                    zolnierze=straty;
                    xowa=i;
                    yowa=j;
                }

            }
        }
    }
    cout<<xowa<<" "<<yowa<<" "<<zolnierze<<endl;
    return 0;
}
