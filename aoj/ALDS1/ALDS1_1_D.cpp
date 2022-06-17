#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> r(n);
    for (int i = 0; i < n; i++) {
        cin >> r.at(i);
    }

    int profit = -1000000000;
    int minr = r.at(0);
    //買った時点と売った時点を2重forで全探索すると、実行時間制限に引っかかる。
    //どこで売ったのか
    for (int i = 1; i < n; i++) {
        profit = max(profit, r.at(i) - minr); //利益を最大化するのは、売ったt以前の最小値で買ったとき。
        minr = min(minr, r.at(i)); //最小値を更新。これ以降の最小値は、売ったt以前の最小値か、売ったtの価格そのもの。
    }

    cout << profit << endl;

    return 0;
}