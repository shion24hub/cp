#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a.at(i);
    }

    //出力の最大値は2001
    int ans;
    for (int i = 0; i < 2002; i++) {
        if (count(a.begin(), a.end(), i) == 0) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;


    return 0;
}