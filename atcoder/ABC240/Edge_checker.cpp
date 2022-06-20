#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (((a == 1) && (b == 10)) || (b == 1) && (a == 10)) {
        cout << "Yes" << endl;
        return 0;
    } else {
        if (abs(a - b) == 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}