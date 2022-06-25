#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

void pdebag() {
    cout << "hi" << endl;
}

int main() {
    string s, t;
    cin >> s >> t;

    bool ans;
    for (int i = 0; i <= 26; i++) {
        string word = "";
        for (char alpha: s) {
            int progress = i;
            int dis = 'z' - alpha;
            if (i > dis) progress = -(alpha - 'a');
            alpha = alpha + progress;
            word += alpha;
        }
        if (word == t) {
            ans = true;
            break;
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}