#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a, b;
    cin >> n >> a >> b;

    char status;
    char init;
    for (int i = 0; i < n; i++) {
        if ((i = 0) || (i % 2 == 0)) init = '.';
        else init = '#';
        status = init;
        for (int j = 0; j < a; j++) {
            for (int k = 0; k < n; k++) {
                for (int u = 0; u < b; u++) {
                    cout << status;
                }
            }
            cout << endl;
            if (status == '.') status = '#';
            else status = '.';
        }
    }
    return 0;
}