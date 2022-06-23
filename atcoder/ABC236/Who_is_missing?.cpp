#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<int> a(4 * n - 1);
    for (int i = 0; i < 4 * n - 1; i++) cin >> a.at(i);

    map <int, int> base;
    vector<bool> checker(n, true);
    for (int i = 0; i < 4 * n - 1; i++) {
        int num = a.at(i);
        if (base.count(num)) base[num] += 1;
        else base[num] = 1;

        if (base[num] == 4) checker.at(num - 1) = false;
    }

    for (int i = 0; i < n; i++) {
        if (checker.at(i)) {
            cout << i + 1 << endl;
            return 0;
        }
    }



    return 0;
}