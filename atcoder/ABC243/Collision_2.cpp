#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    string s;

    for (int i = 0; i < n; i++) cin >> x.at(i) >> y.at(i);
    cin >> s;

    bool ans = false;
    bool complete = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (y.at(i) == y.at(j)) {
                if (s.at(i) != s.at(j)) {
                    ans = true;
                    complete = true;
                    break;
                }
            } 
        }
        if (complete) break;
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}