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
    
    int n, q;
    cin >> n >> q;
    vector<int> x(q);
    rep(i, q) cin >> x[i];
    
    vector<int> a(n);
    rep(i, n) {
        a[i] = i + 1;
    }

    //pintvec(a, 1);

    map<int, int> database;
    rep(i, n) {
        database[i + 1] = i;
    }

    //piimap(database, 1);

    rep(i, q) {
        //右端にあるか判断
        if (database[x[i]] != n - 1) {
            int tmp_ball = a[database[x[i]]];
            int right_ball = a[database[x[i]] + 1];
            a[database[x[i]]] = a[database[x[i]] + 1];
            a[database[x[i]] + 1] = tmp_ball;

            int tmp_ind = database[x[i]];
            database[x[i]] = database[right_ball];
            database[right_ball] = tmp_ind;
        } else {
            int tmp_ball = a[database[x[i]]];
            int left_ball = a[database[x[i]] - 1];
            a[database[x[i]]] = a[database[x[i]] - 1];
            a[database[x[i]] - 1] = tmp_ball;

            int tmp_ind = database[x[i]];
            database[x[i]] = database[left_ball];
            database[left_ball] = tmp_ind;
        }
        // cout << i + 1 << "回目のスワップ" << endl;
        // rep(i, n) {
        //     cout << a[i] << endl;
        // }
        // cout << endl;
    }

    rep(i, n) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}