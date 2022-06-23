#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (int i = 0; i < n; i++) cin >> s.at(i);
    for (int i = 0; i < m; i++) cin >> t.at(i);

    set<string> rapid_station(t.begin(), t.end());
    for (string norm_station : s) {
        if (rapid_station.count(norm_station)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}