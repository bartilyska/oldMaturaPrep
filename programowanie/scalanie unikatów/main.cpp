#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int tab1[n],tab2[m];
    for (int i=0;i<n;i++)
    {
        cin>>tab1[i];
    }
    for (int i=0;i<m;i++)
    {
        cin>>tab2[i];
    }
    int wynik[m+n];
    sort(tab1,tab1+n);
    sort(tab2,tab2+m);
    /*for (int i=0;i<n;i++)
    {
        cout<<tab1[i];
    }
    for (int i=0;i<m;i++)
    {
        cout<<tab2[i];
    }*/
    int k=0,j=0,i=0,licz=0;
    while(k<m+m && i<n && j<m)
    {
        if(tab1[i]<tab2[j])
        {
            wynik[k]=tab1[i];
            licz++;
            i++;
        }
        else{
            wynik[k]=tab2[j];
            licz++;
        }
        while(tab1[i]==wynik[k])
            i++;
        while(tab2[j]==wynik[k])
            j++;
    k++;
    }
    if(k<m+n)
    {
        if(i<n)
        {
            while(i<n)
            {
                wynik[k]=tab1[i];
                licz++;
                i++;
                while(wynik[k]==tab1[i])
                    i++;
                k++;
            }
        }
        else{
            while(j<m)
            {
                wynik[k]=tab2[j];
                licz++;
                j++;
                while(wynik[k]==tab2[j])
                    j++;
                k++;
            }
        }
    }
    for(int o=0;o<licz;o++)
    {
        cout<<wynik[o]<<" ";
    }
    return 0;
}
