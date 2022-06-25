#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    // 処理
    vector<int> base(4);
    int p = 0;

    for (int i = 0; i < n; i++) {
        int progress = a.at(i);
        base.at(0) += 1;

        //駒が乗っているindexを取得
        vector<bool> ind(4);
        for (int j = 0; j < 4; j++) {
            if (base.at(j)) ind.at(j) = true;
        }

        //Pがいくつ増えたか
        // for (int k = 0; k < 4; k++) {
        //     if (ind.at(k) + progress >= 4) p++; 
        // }

        //baseの更新
        for (int u = 0; u < 4; u++) {
            if (ind.at(u)) {
                if (u + progress <= 3) {
                    base.at(u+progress) += 1;
                    base.at(u) -= 1;
                } else {
                    cout << endl;
                    p++;
                    base.at(u) -= 1;
                }
            }
        }
    }

    cout << p << endl;

    return 0;
}