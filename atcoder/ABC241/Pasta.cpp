#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < m; i++) cin >> b.at(i);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b.at(i) == a.at(j)) {
                a.at(j) = 0;
                b.at(i) = 0;
                break;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < m; i ++) {
        sum += b.at(i);
    }

    if (sum == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}