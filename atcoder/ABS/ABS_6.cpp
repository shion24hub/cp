#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int num = 1; num <= n; num++) {
        int sbj = num;

        int sum = 0;
        int quo, rem;

        while (sbj > 0) {
            quo = sbj / 10;
            rem = sbj % 10;
            sum += rem;
            sbj = quo;
        }
 
        if ((a <= sum) && (sum <= b)) ans += num;
    }

    cout << ans << endl;

    return 0;
}