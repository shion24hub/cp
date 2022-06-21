#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    vector<bool> checker(2002, false);
    for (int i = 0; i < n; i++) {
        checker.at(a.at(i)) = true;
    }

    for (int i = 0; i <= 2001; i++) {
        if (!checker.at(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}