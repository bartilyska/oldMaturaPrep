#include <iostream>

using namespace std;

int main()
{
    int a,b,testy;
    cout<<"Podaj testy: ";
    cin>>testy;
    for(int i=0;i<testy;i++)
    {
    cout<<"Podaj a i b: ";
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<"nwd: "<<a<<" "<<endl;
    }
    return 0;
}
