#include <iostream>

using namespace std;
bool funkcja(string pod,string k)
{
    int indeks=k.length()-1;
    for(int l=pod.length()-1; l>=0; l--)
    {
        if(pod[l]==k[indeks])
            indeks--;
        if(indeks==-1)
            return true;
    }
    return false;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string pod;
        cin>>pod;
        int k;
        cin>>k;
        for(int j=0;j<k;j++)
        {
            string ciag;
            cin>>ciag;
            if(funkcja(pod,ciag))
                cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
