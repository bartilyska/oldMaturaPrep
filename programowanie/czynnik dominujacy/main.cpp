#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=2;
    int maxi=-1,podstawa=0,brak=0;
    while(n>1)
    {
        if(n%p==0)
        {
            int odp=0;
            while(n%p==0 && n>1)
            {
                odp++;
                n=n/p;
            }
            if(odp==maxi)
            {
                brak=1;
            }
            if(odp>maxi)
            {
                maxi=odp;
                podstawa=p;
                brak=0;
            }
        }
        p++;
    }
    if(brak==1)
    {
        cout<<"brak"<<endl;
    }
    else
    {
       cout<<podstawa<<" "<<maxi<<endl;
    }

    return 0;
}
