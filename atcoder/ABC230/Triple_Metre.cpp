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

    string s;
    cin >> s;

    if (s.size() == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    char pre_alpha = s.at(0);
    bool ans = true;
    for (int i = 1; i < s.size(); i++) {
        char alpha = s.at(i);
        if (pre_alpha == 'o') if (alpha == 'o') {
            ans = false;
        }
        pre_alpha = s.at(i);
    }

    char pre2_alpha = s.at(0);
    pre_alpha = s.at(1);
    for (int i = 2; i < s.size(); i++) {
        char alpha = s.at(i);
        if (pre2_alpha == 'x') if (pre_alpha == 'x') if (alpha == 'x') {
            ans = false;
        }

        if (pre2_alpha == 'o') if (pre_alpha == 'x') if (alpha == 'o') {
            ans = false;
        }
        pre2_alpha = pre_alpha;
        pre_alpha = s.at(i);
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    

    return 0;
}