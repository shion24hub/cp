#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int taka_quo = x / (a + c);
    int taka_rem = x % (a + c);
    int taka_rem_run;
    if (taka_rem - a > 0) {
        taka_rem_run = a;
    } else {
        taka_rem_run = taka_rem;
    }

    int ao_quo = x / (d + f);
    int ao_rem = x % (d + f);
    int ao_rem_run;
    if (ao_rem - d > 0) {
        ao_rem_run = d;
    } else {
        ao_rem_run = ao_rem;
    }

    int takahashi = (taka_quo * a * b) + (taka_rem_run * b);
    int aoki = (ao_quo * d * e) + (ao_rem_run * e);

    if (takahashi > aoki) {
        cout << "Takahashi" << endl;
    } else if (takahashi < aoki) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }

    return 0;
}