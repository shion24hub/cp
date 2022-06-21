#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    int counter = 0;
    bool complete = false;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (a.at(i) % 2 != 0) {
                complete = true;
                break;
            }
        }
        if (complete) break;
        for (int i = 0; i < n; i++) {
            a.at(i) /= 2;
        }
        counter++;
    }

    cout << counter << endl;
    

    return 0;
}