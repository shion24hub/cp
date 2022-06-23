#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n), x(q), k(q);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < q; i++) cin >> x.at(i) >> k.at(i);

    //cout << "hi" << endl;

    map<int, vector<int>> ind_base;
    for (int i = 0; i < n; i++) {
        ind_base[a.at(i)].push_back(i);
    }

    //cout << "hi2" << endl;

    for (int i = 0; i < q; i++) {
        if (k.at(i) > ind_base[x.at(i)].size()) {
            cout << -1 << endl;
        } else {
            cout << ind_base[x.at(i)].at(k.at(i) - 1) + 1 << endl;
        }        
    }

    //cout << ind_base[1].at(0) << " " << ind_base[1].at(1) << endl;

    return 0;
}