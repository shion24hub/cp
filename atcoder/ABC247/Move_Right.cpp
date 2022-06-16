#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    cout << '0';
    for (int i = 0; i < 3; i++) {
        char char_s = s.at(i);
        cout << char_s;
    }

    cout << endl;

    return 0;
}