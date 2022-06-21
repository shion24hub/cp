#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll a, b, k;
    cin >> a >> b >> k;

    int counter = 0;
    while (a < b) {
        a *= k;
        counter++;
    }

    cout << counter << endl;

    return 0;
}