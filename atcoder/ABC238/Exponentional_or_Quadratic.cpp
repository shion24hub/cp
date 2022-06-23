#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    if (n < 5) {
        int ans1 = pow(2, n);
        int ans2 = pow(n, 2);

        if (ans1 > ans2) cout << "Yes" << endl;
        else cout << "No" << endl;
        return 0;
        
    } else {
        cout << "Yes" << endl;
    }
    

    return 0;
}