//未完成

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s.at(i);


    int iter = n - 6 + 1;
    bool ans = false;
    //横の判定
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < iter; j++) {
            int counter = 0;
            for (int k = 0; k < 6; k++) {
                if (s.at(i).at(j + k) == '#') counter++;
            }
            if (counter >= 4) ans = true;
        }
    }
    //縦の判定
    if (!ans) {
        for (int i = 0; i < iter; i++) {
            for (int j = 0; j < n; j++) {
                int counter = 0;
                for (int k = 0; k < 6; k++) {
                    if (s.at(i + k).at(j) == '#') counter++;
                }
                if (counter >= 4) ans = true;
            }
        }
    }
    //斜めの判定1
    if (!ans) {
        for (int i = 0; i < iter; i++) {
            for (int j = 0; j < iter; j++) {
                int counter = 0;
                for (int k = 0; k < 6; k++) {
                    if (s.at(i + k).at(j + k) == '#') counter++;
                }
                if (counter >= 4) ans = true;
            }
        }
    }
    //斜めの判定2
    if (!ans) {
        for (int i = 0; i < iter; i++) {
            for (int j = 0; j < iter; j++) {
                int counter = 0;
                for (int k = 0; k < 6; k++) {
                    if (s.at(i + n - (i + 1) - k).at(j + k) == '#') counter++;
                }
                if (counter >= 4) ans = true;
            }
        }
    }
    //斜めの判定3
    if (!ans) {
        for (int i = 0; i < iter; i++) {
            for (int j = 0; j < iter; j++) {
                int counter = 0;
                for (int k = 0; k < 6; k++) {
                    if (s.at(i + k).at(j + n - (j + 1) - k) == '#') counter++;
                }
                if (counter >= 4) ans = true;
            }
        }
    }
    //斜めの判定4
    if (!ans) {
        for (int i = 0; i < iter; i++) {
            for (int j = 0; j < iter; j++) {
                int counter = 0;
                for (int k = 0; k < 6; k++) {
                    if (s.at(i + n - (i + 1) - k).at(j + n - (j + 1) - k) == '#') counter++;
                }
                if (counter >= 4) ans = true;
            }
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}