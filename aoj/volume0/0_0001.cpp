#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> m(10);
    for (int i = 0; i < 10; i++) {
        cin >> m.at(i);
    }

    sort(m.begin(), m.end());
    reverse(m.begin(), m.end());

    for (int i = 0; i < 3; i++) {
        cout << m.at(i) << endl;
    }

    return 0;
}