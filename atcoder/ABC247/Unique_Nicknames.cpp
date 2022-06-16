#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<string> s(n);
    vector<string> t(n);
    for (int i = 0; i < n; i++) {
        string s_in, t_in;
        cin >> s_in >> t_in;
        s.at(i) = s_in;
        t.at(i) = t_in;
    }

    string first_name;
    string last_name;
    bool ans = true;
    for (int i = 0; i < n; i++) {
        bool flag_ss = true;
        bool flag_st = true;
        bool flag_ts = true;
        bool flag_tt = true;
        
        bool flag_s = false;
        bool flag_t = false;
        first_name = s.at(i);
        last_name = t.at(i);
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (first_name == s.at(j)) {
                    flag_ss = false;
                }
                if (first_name == t.at(j)) {
                    flag_st = false;
                }
                if (last_name == s.at(j)) {
                    flag_ts = false;
                }
                if (last_name == t.at(j)) {
                    flag_tt = false;
                }
            }
        }
        if (flag_ss && flag_st) {
            flag_s = true;
        }
        if (flag_ts && flag_tt) {
            flag_t = true;
        }
        if (!(flag_s || flag_t)) {
            ans = false;
            break;
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}