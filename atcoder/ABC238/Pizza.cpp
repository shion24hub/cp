#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a.at(i);

    vector<int> line_degree;

    for (int i = 0; i < n; i++) {
        int turn = a.at(i);
        for (int j = 0; j < line_degree.size(); j++) {
            int addnum = line_degree.at(j) + turn;
            if (addnum > 360) addnum -= 360;
            line_degree.push_back(addnum);
            cout << "追加" << endl;
        }
    }

    for (int i = 0; i < line_degree.size(); i++) {
        cout << line_degree.at(i) << endl;
    }

    sort(line_degree.begin(), line_degree.end());
    line_degree.push_back(360);

    int minus = line_degree.at(0);
    int max_degree = 0;
    for (int i = 1; i < line_degree.size(); i++) {
        max_degree = max(max_degree, line_degree.at(i) - minus);
        minus = line_degree.at(i);
    }

    cout << max_degree << endl;

    return 0;
}