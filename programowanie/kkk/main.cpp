#include <iostream>
#include <fstream>

using namespace std;
string a1,a2,aNWP;
ofstream plik("plk.txt");
int NWP(int i, int j)
{
    if(!a1[i]||!a2[j])
        return 0;
    else
        if(a1[i]==a2[j])
            return 1+NWP(i+1,j+1);
    else
        return max(NWP(i+1,j),NWP(i,j+1));
}
int main()
{
    int i,j;
    cin>>a1>>a2;
    aNWP="";
    i=j=0;
    while(a1[i]&&a2[j])
    {
        if(a1[i]==a2[j])
        {
            aNWP=a1[i];
            i++;
            j++;
        }
        else if(NWP(i+1,j)<=NWP(i,j+1))
            j++;
        else
            i++;
    }
        plik<<"xd"<<endl;
    return 0;
}
