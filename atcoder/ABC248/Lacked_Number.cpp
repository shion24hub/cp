#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    int total = 0;
    for (char x: s) {

        int num = x - '0';
        total += num;
    }

    cout << 45 - total << endl;

    return 0;

}