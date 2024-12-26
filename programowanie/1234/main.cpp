#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int lowestTriangle(float base, float area, float i)
{
    i = 2*area/base;
    return ceil(i);
}

int main() {
    float base;
    float area;
    float i;
    cin >> base >> area;
    int height = lowestTriangle(base, area, i);
    cout << height << endl;
    return 0;
}
