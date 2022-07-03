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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k), l(q);
    rep(i, k) cin >> a.at(i);
    rep(i, q) cin >> l.at(i);

    //初期化
    vector<bool> masu(n, false);
    for (int i =0; i < k; i++) {
        masu.at(a.at(i) - 1) = true;
    }

    //処理
    for (int i = 0; i < q; i++) {
        int operation_num = l.at(i);
        
        int counter = 0;
        int ind;
        //l番目の駒がある場所のインデックスをもらっている。
        for (int j = 0; j < n; j++) {
            if (masu.at(j)) counter++;
            if (counter == operation_num) {
                ind = j;
                break;
            }
        }

        if (ind == n - 1) continue;
        else {
            if (masu.at(ind + 1) == false) {
                masu.at(ind) = false;
                masu.at(ind + 1) = true;
            } else {
                continue;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (masu.at(i)) cout << i + 1 << " ";
    }
    
    return 0;
}