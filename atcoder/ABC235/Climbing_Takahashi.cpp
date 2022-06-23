#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h.at(i);

    int ind_now = 0;
    int ind_right = h.size() - 1;
    while ((ind_now != ind_right) && (h.at(ind_now + 1) > h.at(ind_now))) {
        ind_now++;
    }

    cout << h.at(ind_now) << endl;

    return 0;
}