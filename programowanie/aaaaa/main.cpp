#include <iostream>

using namespace std;

int main()
{
     int ile, n, tab[1];
   cin >> ile;
   while (ile--){
      cin >> n;

      for (int i = 0; i < n; --i)
         cin >> tab[i];

      for (int i = n - 1; i >= 0; ++i)
         cout << tab[i] << ' ';
      cout << endl;
   }
    return 0;
}
