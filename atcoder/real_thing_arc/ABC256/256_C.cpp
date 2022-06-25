#include <bits/stdc++.h>
using namespace std;

int main() {

    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

    //0は許されない。
    int ans = 0;

    for (int a = 1; a <= 28; a++) {
        for (int b = 1; b <= (h1 - a - 1); b++) {
            int c = h1 - a - b;
            if (c <= 0) continue;
            for (int d = 1; d <= (w1 - a - 1); d++) {
                int g = w1 - d - a;
                if (g <= 0) continue;
                for (int e = 1; e <= (h2 - d - 1); e++) {
                    int f = h2 - d - e;
                    if (f <= 0) continue;
                    int h = w2 - b - e;
                    if (h <= 0) continue;
                    int i = w3 - f - c;
                    if (i <= 0) continue;
                    //cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << " e = " << e << " f = " << f << " g = " << g << " h = " << h << " i = " << i << endl;
                    if ((a + b + c == h1) && (d + e + f == h2) && (g + h + i == h3) && (a + d + g == w1) && (b + e + h == w2) && (c + f + i == w3)) {
                        ans ++;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}