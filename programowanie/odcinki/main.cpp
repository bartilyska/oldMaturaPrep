#include <iostream>

using namespace std;

int main()
{
    int licznik=0;
    float x1,x2,x3,x4,y1,y2,y3,y4;
    double a1,b1,a2,b2,p,q;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    if(x2!=x1 && x4!=x3)
    {
    a1=(y2-y1)/(x2-x1);
    b1=y2-(a1*x2);
    a2=(y4-y3)/(x4-x3);
    b2=y4-(a2*x4);
    p=(b2-b1)/(a1-a2);
    q=a1*p+b1;
    if(x1<=p && x2>=p || x1>=p && x2<=p)
    {
        if(y1<=q && y2>=q || y1>=q && y2<=q)
        {
            if(x3<=p && x4>=p || x3>=p && x4<=p)
            {
                if(y3<=q && y4>=q || y3>=q && y4<=q)
                {
                    licznik++;
                }

            }

        }

    }
    }
    if(x1==x2)
    {
        p=x1;

    }
    cout<<licznik<<" "<<p<<" "<<q<<endl;
    return 0;
}
