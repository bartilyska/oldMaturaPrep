#include <iostream>

using namespace std;
int maxsum(int tab[],int t)
{
    int maxi=-100,indeks;
    for(int i=0;i<t;i++)
    {
        for(int j=i;j<t;j++)
        {
            int obecna=0;
            for(int k=i;k<=j;k++)
            {
                obecna+=tab[k];
                if(maxi<obecna)
                  {
                      maxi=obecna;
                    indeks=k;
                  }
            }
        }
    }
return  maxi;
return indeks;
}
int main()
{
    int t=8;
    int tab[8]={4,-10,3,-9,5,6,-3,5};
    cout<<maxsum(tab,t)<<endl;
    for(int i=0;i<t;i++)
    {
        if(i>0)
        tab[i]+=tab[i-1];
    }
    /*for(int i=0;i<t;i++)
    {
        cout<<tab[i]<<endl;
    }*/
    int maxim=0;
    for(int i=0;i<t;i++)
    {
        for(int j=i;j<t;j++)
        {
           int ob=tab[j];
            if(i>0)
                ob-=tab[i-1];
            if(maxim<ob)
                maxim=ob;
        }
    }
    cout<<maxim<<endl;
    int mi=0;
    for(int i=0;i<t;i++)
    {
        int sumka=0;
        for(int j=i;j<t;j++)
        {
            sumka+=tab[j];
            if(sumka>mi)
                mi=sumka;
        }
    }
    cout<<mi<<endl;
    return 0;
}
