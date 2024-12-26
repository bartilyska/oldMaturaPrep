#include <iostream>

using namespace std;

int main()
{
    char tekst;
    bool ok=0;
    while(cin>>tekst)
    {
        if(ok==1)
        {
            tekst=tekst-32;
            ok=0;
        }
        if(tekst==' ')
        {
            ok=1;
            continue;
        }
        cout<<tekst;
    }
    return 0;
}
