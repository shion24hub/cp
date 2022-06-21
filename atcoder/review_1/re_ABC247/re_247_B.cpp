#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    for (int i = 0; i < n; i++) cin >> s.at(i) >> t.at(i);

    bool first_ok = true;
    bool last_ok = true;
    for (int i = 0; i < n; i++) {
        string first = s.at(i);
        string last = t.at(i);
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if ((first == s.at(j)) || first == t.at(j)) first_ok = false;
            if ((last == s.at(j)) || last == t.at(j)) last_ok = false;
        }
        if (!(first_ok || last_ok)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}