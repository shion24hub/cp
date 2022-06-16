#include <bits/stdc++.h>
using namespace std;

int main() {

    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int xans, yans;
    if (x1 == x2) xans = x3;
    if (x1 == x3) xans = x2;
    if (x2 == x3) xans = x1;

    if (y1 == y2) yans = y3;
    if (y1 == y3) yans = y2;
    if (y2 == y3) yans = y1;

    cout << xans << " " << yans << endl;

    return 0;
}