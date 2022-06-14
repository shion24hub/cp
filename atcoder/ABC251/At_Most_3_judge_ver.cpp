#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, w;
    cin >> n >> w;

    vector<int> a(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> a.at(i);
    }

    int counter = 0;
    int num1, num2, num3;
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n ; j++) {
            if (i == j) {
                break;
            }
            for (int k = 0; k < n ; k++) {
                if (k == i || k == j) {
                    break;
                }

                if (i == 0) {
                    num1 = 0;
                } else {
                    num1 = a.at(i - 1);
                }
                
                if (j = 0) {
                    num2 = 0;
                } else {
                    num2 = a.at(j - 1);
                }

                if (k = 0) {
                    num3 = 0;
                } else {
                    num3 = a.at(k - 1);
                }

                int sum = num1 + num2 + num3;
                if (w > sum) {
                    counter++;
                }
            }
        }
    }

    cout << counter << endl;

    return 0;
}