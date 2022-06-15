#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, w;
    cin >> n >> w;

    vector<int> a(n + 1);
    a.at(0) = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> a.at(i);
    }

    int counter = 0;
    if (n == 1) {
        counter++;
    } else if (n == 2) {
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n + 1; j++) {
                if (i != j) {
                    int num1 = a.at(i);
                    int num2 = a.at(j);

                    if (num1 + num2 <= w) {
                        counter++;
                    }
                }
            }
        }
    } else {
        for (int i = 0; i < n + 1; i++) {
            for (int j = 0; j < n + 1; j++) {
                for (int k = 0; k < n + 1; k++) {
                    if ((i != j) && (j != k) && (k != i)) {
                        int num1 = a.at(i);
                        int num2 = a.at(j);
                        int num3 = a.at(k);
                        if (num1 + num2 + num3 <= w) {
                            counter++;
                        }
                    }
                }
            }
        }
    }
    cout << counter << endl;

    return 0;
}