#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    for (int i = 0; i < n; i++) cin >> b.at(i);

    int ans_1 = 0; 
    for (int i = 0; i < n; i++) {
        if (a.at(i) == b.at(i)) ans_1 += 1; 
    }

    int ans_2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (a.at(i) == b.at(j)) ans_2 += 1;
        }
    }

    cout << ans_1 << endl;
    cout << ans_2 << endl;

    return 0;
}