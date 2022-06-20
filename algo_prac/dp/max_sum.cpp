/*　
    問題1 最大和問題　
    n個の整数a[0], a[1], ... , a[n-1]が与えられる。
    これらの整数から何個かの整数を選んで総和を取った時の、
    総和の最大値を求めよ。
    また、何も選ばない場合の総和は0であるものとする。

    制約:
    1 <= n <= 10000
    -1000 <= a[i] <= 1000

    from : https://qiita.com/drken/items/a5e6fe22863b7992efdb
    
    (DPでなくても解けるが、あえてDPで解く。)
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(10010);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    vector<int> dp(10010);

    dp.at(0) = 0;
    for (int i = 0; i < n; i++) {
        dp.at(i + 1) = max(dp.at(i), dp.at(i) + a.at(i));
    }

    cout << dp[n] << endl;

    return 0;
}