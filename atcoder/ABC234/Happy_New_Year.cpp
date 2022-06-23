#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll ans = 0;

int gen(int k_pre) {
    for (int i = 1; i < 70; i++) {
        if ((pow(2, i) <= k_pre) && (k_pre <= pow(2, i + 1))) {
            //int iter = pow(2, i);
            if (pow(2, i) == k_pre) {
                return 2 * pow(10, i);
            }
            int num = k_pre - pow(2, i); //check
            if (num != 1) {
                ans += 2 * pow(10, i);
                ans = gen(num);
            } else {
                ans += 2 * pow(10, i);
                ans += 2;
            }
        }
    }
    return ans;
}

int main() {
    int k;
    cin >> k;

    ll final_ans = 0;

    if (k == 1) {
        cout << 2 << endl;
        return 0;
    }

    final_ans = gen(k);

    cout << final_ans << endl;


    return 0;
}