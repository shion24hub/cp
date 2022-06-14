#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(k);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    for (int i = 0; i < k; i++) {
        cin >> b.at(i);
    }

    //aの最大値を求める。
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < a.at(i)) {
            max = a.at(i);
        }
    }

    bool ans = false;
    for (int i: b) {
        if (a.at(i - 1) == max) {
            ans = true;
            break;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;

}