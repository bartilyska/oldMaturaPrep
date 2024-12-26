#include <iostream>

using namespace std;
char kod(int liczba)
{
    if(liczba<10)
        return liczba+'0';
    else if(liczba==10) return 'A';
    else if(liczba==11) return 'B';
    else if(liczba==12) return 'C';
    else if(liczba==13) return 'D';
    else if(liczba==14) return 'E';
    else if(liczba==15) return 'F';
}
string nadowolny(int liczba, int system)
{
    string wynik="";
    while(liczba>=1)
    {
        int help=liczba%system;
        liczba=liczba/system;
        wynik=kod(help)+wynik;
    }
    return wynik;
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int liczba;
        cin>>liczba;
        cout<<nadowolny(liczba,16)<<" "<<nadowolny(liczba,11)<<endl;
    }
    return 0;
}
