#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) cin >> d.at(i);

    sort(d.begin(), d.end());

    int pre_d = d.at(0);
    int counter = 1;
    for (int i = 1; i < n; i++) {

        if (pre_d != d.at(i)) counter += 1;

        pre_d = d.at(i); 
    }

    cout << counter << endl;

    return 0;
}