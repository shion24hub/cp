//未完成

#include <bits/stdc++.h>
using namespace std;

// https://moritomo7315.hatenablog.com/entry/2019/02/09/140757
float round_n(float number, double n)
{
    number = number * pow(10,n-1); //四捨五入したい値を10の(n-1)乗倍する。
    number = round(number); //小数点以下を四捨五入する。
    number /= pow(10, n-1); //10の(n-1)乗で割る。
    return number;
}

int main() {
    while (true) {
        int a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if (cin.eof()) break;

        float x, y;

        x = (e * c - b * f) / (e * a - b * d);
        y = (d * c - a * f) / (d * b - a * e);

        cout << x << " " << y << endl;

        float x_ans = round_n(x, 4.0);
        float y_ans = round_n(y, 4.0);

        cout << fixed << setprecision(3) << x_ans << " " << fixed << setprecision(3) << y_ans << endl;
    }

    return 0;
}