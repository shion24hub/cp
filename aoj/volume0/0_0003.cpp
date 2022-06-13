#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> inputs(n, vector<int>(3));
    vector<int> nums(3);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> inputs.at(i).at(j);
        }
    }

    for (int k = 0; k < n; k++) {
        bool flag = false;
        for (int v = 0; v < 3; v++) {
            bool theorem;
            int sum = 0;
            int product = 1;
            int c = inputs.at(k).at(v);
            for (int u = 0; u < 3; u++) {
                if (v != u) {
                    sum += inputs.at(k).at(u);
                    product *= inputs.at(k).at(u);
                }
            }
            theorem = c * c == (sum * sum) - (2 * product);
            if (theorem) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}