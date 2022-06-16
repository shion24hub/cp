#include <bits/stdc++.h>
using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    float dis = sqrt(pow(a, 2) + pow(b, 2));
    float xans = a / dis;
    float yans = b / dis;

    cout << xans << " " << yans << endl;

    return 0;
}