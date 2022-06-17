#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k, x;
    cin >> n >> k >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    //aをソートする。
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 0; i < n; i ++) {
        if ((k > 0) && (a.at(i) > x)) {
            a.at(i) = a.at(i) - (a.at(i) / x) * x;
            k --;
        }
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (k > 0) {
            a.at(i) = 0;
            k --;
        }
        cout << a.at(i) << endl;
        total += a.at(i);
    }

    cout << total << endl;


    return 0;
}