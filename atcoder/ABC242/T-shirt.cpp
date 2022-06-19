#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c, x;
    cin >> a >> b >> c >> x;

    if (x <= a) {
        cout << 1 << endl;
    } else if (x <= b) {
        float num = b - a;
        float p = c / num;
        printf("%.10f", p);
    } else {
        cout << 0 << endl;
    }

    return 0;
}