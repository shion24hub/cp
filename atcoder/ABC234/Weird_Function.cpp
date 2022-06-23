#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int func(int num) {
    return num * num + 2 * num + 3;
}

int main() {
    int t;
    cin >> t;

    int ans = func(func(func(t) + t) + func(func(t)));

    cout << ans << endl;

    return 0;
}