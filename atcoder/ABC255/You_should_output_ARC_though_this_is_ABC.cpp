#include <bits/stdc++.h>
using namespace std;

int main() {

    int r, c;
    cin >> r >> c;

    int a11, a12, a21, a22;
    cin >> a11 >> a12 >> a21 >> a22;

    if ((r == 1) && (c == 1)) cout << a11;
    if ((r == 1) && (c == 2)) cout << a12;
    if ((r == 2) && (c == 1)) cout << a21;
    if ((r == 2) && (c == 2)) cout << a22;

    return 0;
}