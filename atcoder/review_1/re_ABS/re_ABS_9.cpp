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
    int n, y;
    cin >> n >> y;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            int k = n - i - j;
            int sum = i * 10000 + j * 5000 + k * 1000;
            if (sum == y) {
                cout << i << " " << j << " " << k << endl;
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << " " << -1 << endl;

    return 0;
}