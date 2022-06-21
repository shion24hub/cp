#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {

    int a, b, c, x;
    cin >> a >> b >> c >> x;

    int counter = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                int sum = 500 * i + 100 * j + 50 * k;
                if (sum == x) counter++;
            }
        }
    }

    cout << counter << endl;
    

    return 0;
}