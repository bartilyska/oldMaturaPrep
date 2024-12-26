#include <iostream>

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
    int i=0,j=0,k=0;
    while(k<m+n && i<n && j<m)
    {
        if(tab1[i]<tab2[j])
        {
            wynik[k]=tab1[i];
            i++;
        }
        else
        {
            wynik[k]=tab2[j];
            j++;
        }
        k++;
    }
    if(k<m+n)
    {
        if(i<n)
        {
            while(i<n)
            {
                wynik[k]=tab1[i];
                i++;
                k++;
            }
        }
        else{
            while(j<m)
            {
                wynik[k]=tab2[j];
                j++;
                k++;
            }
        }
    }
    for(int o=0;o<m+n;o++)
    {
        cout<<wynik[o]<<" ";
    }
    return 0;
}
