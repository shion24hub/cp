#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int alice = 0, bob = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) alice += a.at(i);
        else bob += a.at(i);
    }

    int ans = alice - bob;

    cout << ans << endl;



    return 0;
}