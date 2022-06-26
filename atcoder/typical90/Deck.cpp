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

    int q;
    cin >> q;
    vector<int> t(q), x(q);
    rep(i, q) cin >> t.at(i) >> x.at(i);

    deque<int> d;

    for (int i = 0; i < q; i++) {
        
        int query = t.at(i);

        if (query == 1) d.push_front(x.at(i));
        else if (query == 2) d.push_back(x.at(i));
        else cout << d.at(x.at(i) - 1) << endl;
    }
    

    return 0;
}