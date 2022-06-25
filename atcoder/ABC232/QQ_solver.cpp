#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); i++)

void pdebag() {
    cout << "hi" << endl;
}

int main() {
    
    string s;
    cin >> s;

    int a = s.at(0) - '0', b = s.at(2) - '0';
    int ans = a * b;

    cout << ans << endl;

    return 0;
}