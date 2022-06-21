#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {


    int x_1, x_2, x_3, y_1, y_2, y_3;
    cin >> x_1 >> y_1 >> x_2 >> y_2 >> x_3 >> y_3;

    int xans, yans;
    if (x_1 == x_2) xans = x_3;
    if (x_2 == x_3) xans = x_1;
    if (x_3 == x_1) xans = x_2;

    if (y_1 == y_2) yans = y_3;
    if (y_2 == y_3) yans = y_1;
    if (y_3 == y_1) yans = y_2;

    cout << xans << " " << yans << endl; 

    return 0;
}