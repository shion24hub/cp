#include <bits/stdc++.h>
using namespace std;

int main() {
    
    //入力
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);
    vector<bool> check(w+1);

    //処理
    
    //1個だけ選ぶ場合
    for (int i = 0; i < n; i++) {
        int num = a.at(i);
        if (num <= w) check.at(num) = true;
    }

    //2個だけ選ぶ場合
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) {
        if (i == j) continue;
        int sum = a.at(i) + a.at(j);
        if (sum <= w) check.at(sum) = true;
    }

    //3個だけ選ぶ場合
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) for (int k = 0; k < n; k++) {
        if ((i == j) || (j == k) || (k == i)) continue;
        int sum = a.at(i) + a.at(j) + a.at(k);
        if (sum <= w) check.at(sum) = true;
    }

    int ans = 0;
    for (int i = 0; i < w+1; i++) {
        if (check.at(i)) ans++;
    }

    cout << ans << endl;
    
    return 0;
}