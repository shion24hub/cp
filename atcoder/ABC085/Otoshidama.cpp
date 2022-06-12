#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, y;
    cin >> n >> y;
 
    bool flag = false;
    bool complete = false;
    int _10000, _5000, _1000;
 
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
 
            int k;
            k = n - i - j;
 
            int sum;
            sum = 10000 * i + 5000 * j + 1000 * k;
 
            if (sum == y) {
                flag = true;
                complete = true;
                _10000 = i;
                _5000 = j;
                _1000 = k;
                break;
            }
 
        }
 
        if (complete) {
            break;
        }
 
    }
 
    if (flag) {
        cout << _10000 << " " << _5000 << " " << _1000 << endl;
    } else {
        cout << -1 << " " << -1 << " " << -1 << endl;
    }
 
 
    return 0;
}