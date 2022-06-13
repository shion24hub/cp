#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    vector<vector<int>> subs(k); 
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (flag > k-1) {
            flag = 0;
        }
        subs.at(flag).push_back(a.at(i));
        flag++;
    }

    for (int i = 0; i < k; i++) {
        sort(subs.at(i).begin(), subs.at(i).end());
    }

    int quo = n / k;
    int checking = 0;
    bool complete = false;
    bool ans = true;
    for (int j = 0; j < quo; j++) {
        for (int i = 0; i < k; i++) {
            if (checking > subs.at(i).at(j)) {
                ans = false;
                complete = true;
                break;
            }
            checking = subs.at(i).at(j);
        }
        if (complete) break;
    }
    
    int rem = n % k;
    bool ans2 = true;
    checking = 0;
    if (rem >= 2) {
        for (int i = 0; i < rem; i++) {
            if (checking > subs.at(i).at(quo)) {
                ans2 = false;
                break;
            }
            checking = subs.at(i).at(quo);
        }
    }

    if (ans && ans2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}