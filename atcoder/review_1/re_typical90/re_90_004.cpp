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
    
    int n;
    cin >> n;
    vector<pair<int, int>> class_point;
    rep(i, n) {
        int c, p;
        cin >> c >> p;
        class_point.push_back({c, p});
    }
    int q;
    cin >> q;
    vector<int> l(q), r(q);
    rep(i, q) cin >> l.at(i) >> r.at(i);

    vector<int> c_one, c_two;
    int c_one_max = 0, c_two_max = 0;
    rep(i, n) {
        if (class_point.at(i).first == 1) {
            c_one.push_back(class_point.at(i).second + c_one_max);
            c_one_max = class_point.at(i).second + c_one_max;
        } else {
            c_one.push_back(c_one_max);
        }

        if (class_point.at(i).first == 2) {
            c_two.push_back(class_point.at(i).second + c_two_max);
            c_two_max = class_point.at(i).second + c_two_max;
        } else {
            c_two.push_back(c_two_max);
        }
    }

    rep(i, q) {
        if (l.at(i) - 2 >= 0) {
            cout << c_one.at(r.at(i) - 1) - c_one.at(l.at(i) - 2) << " " << c_two.at(r.at(i) - 1) - c_two.at(l.at(i) - 2) << endl;
        } else {
            cout << c_one.at(r.at(i) - 1) << " " << c_two.at(r.at(i) - 1) << endl;
        }
    }

    return 0;
}