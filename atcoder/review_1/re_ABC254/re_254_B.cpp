#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<vector<int>> multi_vec(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0 || j == i ) {
                multi_vec.at(i).push_back(1);
            } else {
                int push_num = multi_vec.at(i-1).at(j-1) + multi_vec.at(i-1).at(j);
                multi_vec.at(i).push_back(push_num);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << multi_vec.at(i).at(j) << " ";
        }
        cout << endl;
    }

    return 0;
}