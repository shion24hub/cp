#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a, b;
    cin >> n >> a >> b;

    char first_status = '.';
    char status = '.';

    for (int i = 0; i < n; i++ ) {
        for (int j = 0; j < a; j++) { 
            status = first_status;
            for (int k = 0; k < n; k++) {
                for (int v = 0; v < b; v++) {
                    cout << status;
                }

                if (status == '.') {
                    status = '#';
                } else {
                    status = '.';
                }
            }

            cout << endl;
        }

        if (first_status == '.') {
            first_status = '#';
        } else {
            first_status = '.';
        }
    }

    return 0;
}