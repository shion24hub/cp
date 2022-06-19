#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s.at(i);
    }

    vector<int> coordinate;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char status = s.at(i).at(j);
            if (status == 'o') {
                coordinate.push_back(i);
                coordinate.push_back(j);
            }
        }
    }

    int ans = abs(coordinate.at(0) - coordinate.at(2)) + abs(coordinate.at(1) - coordinate.at(3));

    cout << ans << endl;

    return 0;
}