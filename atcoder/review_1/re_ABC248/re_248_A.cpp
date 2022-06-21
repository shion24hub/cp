#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        int num = s.at(i) - '0';
        sum += num;
    }

    cout << 45 - sum << endl;

    return 0;
}