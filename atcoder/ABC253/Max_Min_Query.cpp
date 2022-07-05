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
    
    ll q;
    cin >> q;
    vector<vector<ll>> query(q);
    rep(i, q) {
        ll t;
        cin >> t;
        if (t == 1) {
            ll x;
            cin >> x;
            query[i].push_back(t);
            query[i].push_back(x);
        } 
        else if (t == 2) {
            ll x, c;
            cin >> x >> c;
            query[i].push_back(t);
            query[i].push_back(x);
            query[i].push_back(c);
        }
        else {
            query[i].push_back(t);
        }
    }

    map<ll, ll> counter;
    set<ll> s;
    rep(i, q) {
        int mode = query[i][0];
        if (mode == 1) {
            counter[query[i][1]] += 1;
            s.insert(query[i][1]);
        }
        else if (mode == 2) {
            ll delete_num = min(query[i][2], counter[query[i][1]]);
            if (counter[query[i][1]] - delete_num <= 0) {
                counter[query[i][1]] = 0;
                s.erase(query[i][1]);
            }
            else {
                counter[query[i][1]] -= delete_num;
            }
        }
        else {
            ll max_num = *rbegin(s);
            ll min_num = *begin(s);
            cout << max_num - min_num << endl;
        }
    }

    return 0;
}