#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> a(10);
    for (int i = 0; i < 10; i++) cin >> a.at(i);

    int _0 = a.at(0);
    int _1 = a.at(_0);
    int _2 = a.at(_1);

    cout << _2 << endl;

    return 0;
}