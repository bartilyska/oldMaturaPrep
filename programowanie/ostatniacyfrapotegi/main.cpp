#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a=0,b=0,suma=0;
        cin>>a>>b;
        if(a>9)
            a=a%10;
        if(a==0) cout<<"0"<<endl;
        if(a==1) cout<<"1"<<endl;
        if(a==2)
        {
            if(b%4==0) cout<<"6"<<endl;
            if(b%4==1) cout<<"2"<<endl;
            if(b%4==2) cout<<"4"<<endl;
            if(b%4==3) cout<<"8"<<endl;
        }
        if(a==3)
        {
            if(b%4==0) cout<<"1"<<endl;
            if(b%4==1) cout<<"3"<<endl;
            if(b%4==2) cout<<"9"<<endl;
            if(b%4==3) cout<<"7"<<endl;
        }
        if(a==4)
        {
            if(b%2==0) cout<<"6"<<endl;
            if(b%2==1) cout<<"4"<<endl;
        }
        if(a==5)
        {
            cout<<"5"<<endl;
        }
        if(a==6)
        {
            cout<<"6"<<endl;
        }
        if(a==7)
        {
            if(b%4==0) cout<<"1"<<endl;
            if(b%4==1) cout<<"7"<<endl;
            if(b%4==2) cout<<"9"<<endl;
            if(b%4==3) cout<<"3"<<endl;
        }
        if(a==8)
        {
            if(b%4==0) cout<<"6"<<endl;
            if(b%4==1) cout<<"8"<<endl;
            if(b%4==2) cout<<"4"<<endl;
            if(b%4==3) cout<<"2"<<endl;
        }
        if(a==9)
        {
            if(b%2==0) cout<<"1"<<endl;
            if(b%2==1) cout<<"9"<<endl;
        }
    }
    return 0;
}
