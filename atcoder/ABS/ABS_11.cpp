#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> t(n), x(n), y(n);
    
    for (int i = 0; i < n; i++) cin >> t.at(i) >> x.at(i) >> y.at(i);
    
    int prex = 0, prey = 0, pret = 0;
    bool ans = true;
    for (int i = 0; i < n; i++) {

        int distance = abs(x.at(i) - prex) + abs(y.at(i) - prey);
        int timediff = t.at(i) - pret;

        if (distance == 0) {
            if (timediff % 2 != 0) {
                ans = false;
                break;
            }
        } else {
            if (((timediff - distance) % 2 != 0) || (distance > timediff)) {
                ans = false;
                break;
            }
        }

        prex = x.at(i);
        prey = y.at(i);
        pret = t.at(i);
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}