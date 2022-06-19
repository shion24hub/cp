#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    for (char s_w : s) cout << s_w;
    cout << endl;

    return 0;
}