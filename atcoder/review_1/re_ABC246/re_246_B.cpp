#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    float a, b;
    cin >> a >> b;

    float length = sqrt(pow(a, 2) + pow(b, 2));

    float xans = a / length;
    float yans = b / length;

    printf("%.10f", xans);
    cout << " ";
    printf("%.10f", yans);
    return 0;
}