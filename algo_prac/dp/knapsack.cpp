/*
    問題2　ナップザック問題

    n個の品物があり、i番目の品物のそれぞれの重さと価値が
    weight[i], value[i](i = 0, 1, ... , n-1)となっている。
    これらの品物から重さの総和がwを超えないように選んだ時の、
    価値の総和の最大値を求めよ。

    制約：
    1 <= n <= 100
    weight[i], value[i]は整数
    1 <= weight[i], value[i] <= 1000
    1 <= w <= 10000
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    //入力
    int n, w;
    cin >> n >> w;
    vector<int> weight(110), value(110);
    for (int i = 0; i < n; i++) cin >> value.at(i), weight.at(i);

    //DPテーブル
    vector<vector<int>> dp(110, vector<int>(10010));

    //


    return 0;
}