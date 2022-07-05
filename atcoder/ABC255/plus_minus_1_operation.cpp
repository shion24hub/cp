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
    
    ll x, a, d, n;
    cin >> x >> a >> d >> n;

    // d = 0の場合の処理。
    if (d == 0) {
        cout << abs(x - a) << endl;
        return 0;
    }

    // d > 0の場合の処理。等差数列は大きくなっていく。
    if (d > 0) {

        if (x <= a) {
        cout << abs(x - a) << endl;
        return 0;
        }
        ll max_num = a + (d * (n - 1)); 
        if (max_num <= x) {
            cout << abs(x - max_num) << endl;
            return 0;
        } 

        ll target_ind = (x - a) / d;
        ll rem = (x - a) % d;

        if (rem == 0) {
            cout << 0 << endl;
            return 0;
        }

        ll left = a + (d * target_ind);
        ll right = a + (d * (target_ind + 1));
        ll left_diff = abs(x - left);
        ll right_diff = abs(right - x);
        ll ans = min(left_diff, right_diff); 

        cout << ans << endl;

    } else {
        // d < 0 の場合の処理。等差数列はだんだん小さくなっていく。
        if (x >= a) {
            cout << abs(x - a) << endl;
            return 0;
        }

        ll min_num = a + (d * (n - 1)); 
        if (min_num >= x) {
            cout << abs(min_num - x) << endl;
            return 0;
        } 

        ll target_ind = (x - a) / d;
        ll rem = (x - a) % d;

        if (rem == 0) {
            cout << 0 << endl;
            return 0;
        }

        ll left = a + (d * target_ind);
        ll right = a + (d * (target_ind + 1));
        ll left_diff = abs(x - left);
        ll right_diff = abs(right - x);
        ll ans = min(left_diff, right_diff);

        cout << ans << endl;

        return 0;
    }
}