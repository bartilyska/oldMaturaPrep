#include <iostream>
using namespace std;
int main()
{
ios::sync_with_stdio(false);
  int d;
  cin>>d;
  int x[d],y[d];
  for(int i=0;i<d;i++)
  {
      cin>>x[i]>>y[i];
  }
  int n;
  cin>>n;
  int a,b;
  for(int i=0;i<n;i++)
  {
      cin>>a>>b;
      bool licznik=false;
      for(int j=0;j<d;j++)
      {
          if(a==x[j])
          {
            if(b==y[j])
            {
                licznik=true;
                break;
            }
          }
      }
      if(licznik)
        cout<<"TAK\n";
        else cout<<"NIE\n";
  }
    return 0;
}
