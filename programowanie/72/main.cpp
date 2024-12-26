#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string napis1[200],napis2[200];
    ifstream plik("napisy.txt");
    for(int i=0;i<200;i++)
    {
        plik>>napis1[i]>>napis2[i];
    }
    int licznik=0;
    bool pierwszy=1;
    for(int i=0;i<200;i++)
    {
        if(napis1[i].length()>=3*napis2[i].length() || 3*napis1[i].length()<=napis2[i].length())
        {
            licznik++;
            if(pierwszy==1)
            {
                cout<<napis1[i]<<" "<<napis2[i]<<endl;
                pierwszy=0;
            }
        }
    }
    cout<<licznik;
    for(int i=0;i<200;i++)
    {
        bool prawda=1;
        if(napis1[i].length()<napis2[i].length())
        {
            for(int j=0;j<napis1[i].length();j++)
            {
                if(napis1[i][j]!=napis2[i][j])
                prawda=0;
            }
            if(prawda==1)
            {
                cout<<endl;
                cout<<napis1[i]<<" "<<napis2[i]<<" ";
                for(int k=napis1[i].length();k<napis2[i].length();k++)
                {
                    cout<<napis2[i][k];
                }
            }
        }
    }
    int maxkoncowka=0;
    cout<<endl;
    int koncowka[200]={0};
    for(int i=0;i<200;i++)
    {
        int j=napis1[i].length()-1;
        int k=napis2[i].length()-1;
        while(napis1[i][j]==napis2[i][k])
        {
            koncowka[i]++;
            j--;
            k--;
        }
        if(maxkoncowka<koncowka[i])
            maxkoncowka=koncowka[i];
    }
    cout<<maxkoncowka<<endl;
    for(int i=0;i<200;i++)
    {
        if(maxkoncowka==koncowka[i])
        {
            cout<<napis1[i]<<" "<<napis2[i]<<endl;
        }
    }
    return 0;
}
