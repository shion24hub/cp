#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> data(n); //ジャグ配列
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            if (j == 0 || i == j) {
                data.at(i).push_back(1);
                if (j == i || i == 0) {
                    cout << 1 << endl;
                } else {
                    cout << 1 << " ";
                }

            } else {
                int push_num = data.at(i-1).at(j-1) + data.at(i-1).at(j);
                data.at(i).push_back(push_num);
                cout << push_num << " ";
            }
        }
    }
}