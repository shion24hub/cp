#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a.at(i).at(j);
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            cout << a.at(j).at(i) << " ";
        }
        cout << endl;
    }

    return 0;
}