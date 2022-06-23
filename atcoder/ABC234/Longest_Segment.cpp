#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) cin >> x.at(i) >> y.at(i);

    double preli = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            double dx = x.at(i) - x.at(j), dy = y.at(i) - y.at(j);
            double dis = abs(sqrt(pow(dx, 2) + pow(dy, 2)));

            preli = max(preli, dis);
        }
    }

    printf("%.10f", preli);

    return 0;
}