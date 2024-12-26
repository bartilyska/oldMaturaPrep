#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        float odleglosc;
        int x1,x2,y1,y2,r1,r2,sumapromieni,roznicapromieni;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        sumapromieni=r1+r2;
        roznicapromieni=abs(r1-r2);
        odleglosc=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        if(sumapromieni<=odleglosc)
            cout<<0.00<<endl;
        if(sumapromieni>odleglosc && roznicapromieni<=odleglosc)
            cout<<fixed<<setprecision(2)<<sumapromieni-odleglosc<<endl;
        if(roznicapromieni>odleglosc)
        {
            if(r1<r2)
                cout<<fixed<<setprecision(2)<<2*r1<<endl;
            else cout<<fixed<<setprecision(2)<<2*r2<<endl;
        }
        cout<<sumapromieni<<" "<<roznicapromieni<<" "<<odleglosc<<endl;
    }

    return 0;
}
