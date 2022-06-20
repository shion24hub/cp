#include <bits/stdc++.h>
using namespace std;

int main() {
    double h;
    cin >> h;

    double ans = sqrt(h * (12800000 + h));

    printf("%.10f", ans);

    return 0;
}