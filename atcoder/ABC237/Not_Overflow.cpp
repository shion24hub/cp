#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    ll minus_31 = -pow(2, 31);
    ll _31 = pow(2, 31);

    if ((minus_31 <= n) && (n < _31)) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}