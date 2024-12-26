#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    vector <int> liczby;
    ifstream plik("liczby.txt");
    int x;
    while(plik>>x)
    {
        liczby.push_back(x);
    }
    int poszukiwana=6;
    int l=0;
    int p=liczby.size()-1;
    int s=(l+p)/2;
    while(poszukiwana!=liczby[s])
    {
        if(poszukiwana<liczby[s])
            p=s-1;
        else l=s+1;
        s=(l+p)/2;
    }
    cout<<s+1<<endl;
    return 0;
}
