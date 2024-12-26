#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int a,b;
       cin>>a>>b;
       if(a>=0 && b>0)
       cout<<a%b<<endl;
        else if(a>0 && b<0)
        {
            while(a>=0)
            {
                a=a+b;
            }
            a=a-b;
            cout<<a<<endl;
        }
        else if(a<0 && b>0)
        {
            while(a<0)
            {
                a=a+b;
            }
            cout<<a<<endl;
        }
        else if(a<0 && b<0)
        {
            while(a<0)
            {
                a=a-b;
            }
            cout<<a<<endl;
        }
        else if(a==0 && b<0)
            cout<<0<<endl;
   }
    return 0;
}
