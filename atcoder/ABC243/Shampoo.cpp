#include <bits/stdc++.h>
using namespace std;

int main() {

    int v, a, b, c;
    cin >> v >> a >> b >> c;

    int rem = v % (a + b + c);

    if ((rem - a) < 0) {
        cout << "F" << endl;
        return 0;
    } else {
        rem -= a;
    }

    if ((rem - b) < 0) {
        cout << "M" << endl;
        return 0;
    } else {
        cout << "T" << endl;
    }


    return 0;
}