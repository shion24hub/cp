#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int takahashi = a * 60 * 60 + b * 60; //second
    int aoki = c * 60 * 60 + d * 60 + 1;
    
    if (takahashi < aoki) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    return 0;
}