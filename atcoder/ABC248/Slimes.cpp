#include <bits/stdc++.h>
using namespace std;

int main() {

    long long a, b, k;
    cin >> a >> b >> k;

    int counter = 0;
    while (a < b) {

        a *= k;
        counter++;
    }

    cout << counter << endl;

    return 0;
}