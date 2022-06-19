#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    vector<int> b(k);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < k; i++) cin >> b.at(i);

    auto p = minmax_element(a.begin(), a.end());
    int max = *p.second;
    // int cnt = count(a.begin(), a.end(), max);
    // vector<int> ind(cnt);
    // int counter = 0;
    // for (int i = 0; i < n; i++) {
    //     if ((a.at(i) == max) && (counter < cnt)) {
    //         ind.at(counter) = i+1;
    //         counter++;
    //     }
    // }
    vector<int> ind;
    for (int i = 0; i < n; i++) {
        if (a.at(i) == max) ind.push_back(i+1);
    }

    bool ans = true;
    for (int check: b) {
        if (count(ind.begin(), ind.end(), check) > 0) ans = false;
    }

    if (ans) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}