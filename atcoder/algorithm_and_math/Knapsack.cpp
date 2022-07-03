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

    ll n, w;
    cin >> n >> w;
    vector<ll> weight(n + 1), value(n + 1);
    for (int i = 1; i <= n; i++) cin >> weight.at(i) >> value.at(i);

    vector<vector<ll>> dp(n + 1, vector<ll>(w + 1));

    dp.at(0).at(0) = 0;
    for (int i = 1; i <= n; i++) dp.at(0).at(i) = -(1LL << 60);

    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= w; j++) {

            // j < weight[i]のとき、品物iは選べない。
            if (j < weight.at(i)) dp.at(i).at(j) = dp.at(i - 1).at(j);
            if (j >= weight.at(i)) dp.at(i).at(j) = max(dp.at(i - 1).at(j), dp.at(i - 1).at(j - weight.at(i)) + value.at(i));

        }
    }

    ll ans = 0;
    for (int i = 0; i <= w; i++) ans = max(ans, dp.at(n).at(i));
    cout << ans << endl;

    return 0;
}