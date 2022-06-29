#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

void pdebag() {
    cout << "hi" << endl;
}

void pintvec(vector<int> vec, int mode_num = 0) {
    if (mode_num == 1) {
        cout << endl;
        cout << "print vector<int> from here" << endl;
    }
    for (int i = 0; i < vec.size(); i++) cout << vec.at(i) << endl;
}

void pstrvec(vector<string> vec, int mode_num = 0) {
    if (mode_num == 1) {
        cout << endl;
        cout << "print vector<string> from here" << endl;
    }
    for (int i = 0; i < vec.size(); i++) cout << vec.at(i) << endl;
}

void pismap(map<int, string> m, int mode_num = 0) {
    if (mode_num == 1) {
        cout << endl;
        cout << "print map<int, string> from here" << endl;
    }
    for (auto p: m) {
        auto key = p.first;
        auto value = p.second;
        if (mode_num == 1) {
            cout << key << " => " << value << endl;
        } else {
            cout << key << " " << value << endl;
        }
    }
}

void psimap(map<string, int> m, int mode_num = 0) {
    if (mode_num == 1) {
        cout << endl;
        cout << "print map<string, int> from here" << endl;
    }
    for (auto p: m) {
        auto key = p.first;
        auto value = p.second;
        if (mode_num == 1) {
            cout << key << " => " << value << endl;
        } else {
            cout << key << " " << value << endl;
        }
    }
}

void piimap(map<int, int> m, int mode_num = 0) {
    if (mode_num == 1) {
        cout << endl;
        cout << "print map<int, int> from here" << endl;
    }
    for (auto p: m) {
        auto key = p.first;
        auto value = p.second;
        if (mode_num == 1) {
            cout << key << " => " << value << endl;
        } else {
            cout << key << " " << value << endl;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> p(n, vector<int>(3));
    rep(i, n) rep(j, 3) cin >> p.at(i).at(j);

    vector<pair<int, int>> sums(n);
    rep(i, n) rep(j, 3) {
        sums.at(i).second = i;
        sums.at(i).first += p.at(i).at(j);
    }

    // rep(i, n) {
    //     cout << sums.at(i).first << "->" << sums.at(i).second << endl;
    // }

    //pintvec(sums, 1);

    sort(sums.begin(), sums.end());
    reverse(sums.begin(), sums.end());

    // rep(i, n) {
    //     cout << sums.at(i).first << "->" << sums.at(i).second << endl;
    // }

    vector<bool> ans(n, false);
    int counter = 0;
    int diff = 0;
    rep(i, n) {
        if (counter < k) {
            ans.at(sums.at(i).second) = true;
            counter ++;
            continue;
        }

        diff += sums.at(i - 1).first - sums.at(i).first;
        if (diff <= 300) ans.at(sums.at(i).second) = true;
        else break;
    }

    // rep(i, n) {
    //     cout << ans.at(i) << endl;
    // }

    rep(i, n) {
        if (ans.at(i)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }


    return 0;
}