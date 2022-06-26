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

    //処理
    vector<int> c1_point, c2_point;
    int c1max = 0, c2max = 0;
    int c1pre = -1, c2pre = -1;
    for (int i = 0; i < n; i++) {
        //c1の累積和を保持していく
        if (class_point.at(i).first == 1) {
            c1_point.push_back(class_point.at(i).second + c1max);
            c1max = class_point.at(i).second + c1max;
            c1pre = i;
        } else {
            if (c1pre == -1) c1_point.push_back(0);
            else c1_point.push_back(c1_point.at(c1pre));
        }

        //c2の累積和を保持していく
        if (class_point.at(i).first == 2) {
            c2_point.push_back(class_point.at(i).second + c2max);
            c2max = class_point.at(i).second + c2max;
            c2pre = i;
        } else {
            if (c2pre == -1) c2_point.push_back(0);
            else c2_point.push_back(c2_point.at(c2pre));
        }
    }

    for (int i = 0; i < q; i++) {
        if ((l.at(i) - 2) >= 0) {
            cout << c1_point.at(r.at(i) - 1) - c1_point.at(l.at(i) - 2) << " " << c2_point.at(r.at(i) - 1) - c2_point.at(l.at(i) - 2) << endl;
        }
        else {
            cout << c1_point.at(r.at(i) - 1) << " " << c2_point.at(r.at(i) - 1) << endl;
        }
    }

    return 0;
}