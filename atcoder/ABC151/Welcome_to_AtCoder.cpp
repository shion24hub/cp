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
    int n, m;
    cin >> n >> m;
    vector<pair<int, string>> ps;
    rep(i, m) {
        int p;
        string s;
        cin >> p >> s;
        ps.push_back({p, s});
    }

    map<int, stack<char>> counter;
    int wrong = 0;
    int correct = 0;
    rep(i, m) {
        if (ps.at(i).second == "WA") {
            if (counter[ps.at(i).first].empty()) {
                counter[ps.at(i).first].push('w');
                wrong++;
            }
            else if (counter[ps.at(i).first].top() != 'c') {
                wrong++;
                counter[ps.at(i).first].push('w');
            }
        }

        if (ps.at(i).second == "AC") {
            if (counter[ps.at(i).first].empty()) {
                counter[ps.at(i).first].push('c');
                correct++;
            }
            else if (counter[ps.at(i).first].top() == 'w') {
                correct++;
                counter[ps.at(i).first].push('c');
            }
        }
    }

    cout << correct << " " << wrong << endl;

    return 0;
}