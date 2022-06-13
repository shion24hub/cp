#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> s(h);
    for (int i = 0; i < h; i++) {
        cin >> s.at(i);
    }

    vector<int> point_xs;
    vector<int> point_ys;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            char status = s.at(i).at(j);
            if (status == 'o') {
                point_ys.push_back(i);
                point_xs.push_back(j);
            }
        }
    }

    int abs_x = abs(point_xs.at(0) - point_xs.at(1));
    int abs_y = abs(point_ys.at(0) - point_ys.at(1));
    int ans = abs_x + abs_y;

    cout << ans << endl; 

    return 0;
}