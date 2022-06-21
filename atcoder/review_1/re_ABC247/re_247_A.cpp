#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    cout << 0;
    for (int i = 0; i < s.size() - 1; i++) {
        char num = s.at(i);
        if (num == '1') cout << 1;
        else cout << 0;
    }

    cout << endl;

    return 0;
}